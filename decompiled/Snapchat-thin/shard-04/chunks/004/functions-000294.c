/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103485508; end: 103485587;  */

void FUN_103485508(undefined8 param_1)

{
  if (lRam0000000112f71210 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7699a8);
  return;
}



/* Entry: 103485588; end: 1034855cf;  */

undefined8 FUN_103485588(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dd4238;
  func_0x0001000285a8(0x112dd4238,&UNK_10d996eb0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1034855d0; end: 1034855e7;  */

undefined8 * FUN_1034855d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1034855e8; end: 10348562b;  */

long FUN_1034855e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10348562c; end: 10348562f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348562c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_113091b70);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar3);
    uVar2 = uVar5;
    func_0x000107c41b80();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      func_0x000107c61170(uVar2);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x18);
      func_0x000107c61174();
      func_0x000107c61574(lVar1);
      uVar5 = *(undefined8 *)(lVar3 + _DAT_113012cf0);
      func_0x000107c6157c(uVar5);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_b0);
      func_0x000107c61574(uVar5);
      if (lStack_98 != 0) {
        FUN_1034855d0(&uStack_b0,auStack_80);
        func_0x000107c61428(unaff_x20 + 0x10,&uStack_b0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar5 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c61174();
          func_0x000107c61574(lVar1);
          func_0x000107c61428(unaff_x20 + 0x10,auStack_e0,0,0);
          lVar1 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar1 != 0) {
            uVar4 = *(undefined8 *)(lVar1 + 0x28);
            func_0x000107c61174();
            func_0x000107c61574(lVar1);
            lVar3 = 0;
            func_0x00010348cba0();
            lVar1 = lVar3;
            func_0x000107c613fc();
            *(undefined8 *)(lVar1 + 0x10) = uVar5;
            *(undefined8 *)(lVar1 + 0x18) = uVar4;
            FUN_1034855e8(auStack_80,lVar1 + 0x20);
            *(undefined8 *)(lVar1 + 0x48) = uVar2;
            param_1[3] = lVar3;
            param_1[4] = (long)&PTR_DAT_11065b668;
            *param_1 = lVar1;
            func_0x0001000834e4(auStack_80);
            return;
          }
          func_0x000107c61170(uVar2);
          uVar2 = uVar5;
        }
        func_0x000107c61170(uVar2);
        func_0x0001000834e4(auStack_80);
        goto LAB_1034853b4;
      }
      func_0x000107c61170(uVar2);
    }
    FUN_103485588(&uStack_b0);
  }
LAB_1034853b4:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103485630; end: 1034860b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103485630(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
             long param_6,long param_7,long param_8,long param_9,long param_10,undefined8 param_11,
             undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  undefined8 unaff_x20;
  undefined8 uVar21;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long alStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined1 auStack_90 [48];
  
  func_0x000107c613fc();
  lVar2 = *(long *)(param_5 + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
  }
  else {
    lVar6 = param_6;
    func_0x000107c4b254();
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar3 == 0) {
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
    }
    else {
      lVar6 = param_7;
      func_0x000107c5d2b0();
      func_0x000107c61180();
      lVar4 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar4 == 0) {
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
      }
      else {
        lVar6 = param_9;
        func_0x000107c52030();
        func_0x000107c61180();
        lVar5 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar5 == 0) {
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_8);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_11);
          func_0x000107c61170(param_12);
          func_0x000107c61170(param_13);
        }
        else {
          lVar6 = *(long *)(param_8 + _DAT_113083868);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            uVar7 = *(undefined8 *)(param_2 + _DAT_113091b70);
            func_0x000107c41b80();
            func_0x000107c61180();
            uVar21 = *(undefined8 *)(param_10 + _DAT_113012d20);
            func_0x000107c6157c(uVar21);
            func_0x0001000d224c(auStack_b8);
            func_0x000107c61574(uVar21);
            if (lStack_a0 != 0) {
              func_0x000100b90ff0(auStack_b8,auStack_90);
              lVar8 = 0;
              func_0x000100b91008();
              lVar9 = lVar8;
              func_0x000107c613fc();
              *(long *)(lVar9 + 0x10) = lVar4;
              *(long *)(lVar9 + 0x18) = lVar6;
              *(long *)(lVar9 + 0x20) = lVar5;
              *(long *)(lVar9 + 0x28) = lVar3;
              lVar10 = 0;
              func_0x000100b91054();
              func_0x000107c613fc();
              func_0x000107c61614(lVar10 + 0x10,0);
              func_0x000107c61604(lVar10 + 0x10,lVar2);
              lVar11 = 0;
              func_0x000100b91074();
              lVar12 = lVar11;
              func_0x000107c613fc();
              *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_3 + _DAT_113082420);
              *(undefined1 *)(lVar12 + 0x18) = 0;
              func_0x000107c615f0(lVar3);
              func_0x000107c615f0(lVar4);
              func_0x000107c615f0(lVar6);
              func_0x000107c615f0(lVar5);
              func_0x0001000d224c(auStack_b8);
              func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
              func_0x000107c6157c(lVar10);
              func_0x000107c6157c(lVar9);
              uVar21 = uVar7;
              func_0x0001000b637c();
              ppuStack_c0 = &PTR_DAT_11065b8b0;
              ppuStack_e8 = &PTR_DAT_11065b490;
              lVar13 = 0;
              alStack_108[0] = lVar9;
              lStack_f0 = lVar8;
              alStack_e0[0] = lVar12;
              lStack_c8 = lVar11;
              func_0x000100b91280();
              lVar11 = lVar13;
              func_0x000107c610f8();
              lVar8 = _DAT_112f71bb0;
              lVar14 = 0;
              func_0x000100b913d8();
              pcVar20 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
              (*pcVar20)(lVar11 + lVar8,1,1,lVar14);
              *(undefined8 *)(lVar11 + _DAT_112f71bb8) = 0;
              puVar1 = (undefined8 *)(lVar11 + _DAT_112f71bc0);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(lVar11 + _DAT_112f71bc8) = 0;
              FUN_1034860d0(auStack_b8,lVar11 + _DAT_112f71b50);
              *(long *)(lVar11 + _DAT_112f71b58) = lVar10;
              FUN_1034860d0(alStack_108,lVar11 + _DAT_112f71b60);
              *(undefined8 *)(lVar11 + _DAT_112f71b68) = param_13;
              *(undefined8 *)(lVar11 + _DAT_112f71b70) = param_12;
              puVar15 = PTR_PTR_1126ae568;
              func_0x000107c610f8();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c6157c(lVar10);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c6157c(lVar12);
              func_0x000107c453e4();
              *(undefined **)(lVar11 + _DAT_112f71b78) = puVar15;
              uVar16 = 0;
              func_0x0001000c6560();
              uVar17 = uVar16;
              func_0x000107c613fc();
              func_0x0001000c6580();
              *(undefined8 *)(lVar11 + _DAT_112f71b80) = uVar17;
              FUN_1034860d0(auStack_90,lVar11 + _DAT_112f71b88);
              *(undefined8 *)(lVar11 + _DAT_112f71b90) = uVar21;
              *(undefined1 *)(lVar11 + _DAT_112f71b98) = 0;
              func_0x000100b92594(alStack_e0,lVar11 + _DAT_112f71ba0);
              lVar18 = 0;
              func_0x000100b925e4();
              lVar8 = lVar18;
              func_0x000107c610f8();
              (*pcVar20)(lVar8 + _DAT_112f71a40,1,1,lVar14);
              puVar1 = (undefined8 *)(lVar8 + _DAT_112f71a48);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(lVar8 + _DAT_112f71a50);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined1 *)(lVar8 + _DAT_113807320) = 1;
              *(long *)(lVar8 + _DAT_112f719f8) = lVar10;
              FUN_1034860d0(alStack_108,lVar8 + _DAT_112f71a00);
              *(undefined8 *)(lVar8 + _DAT_112f71a30) = uVar21;
              FUN_1034860d0(auStack_90,lVar8 + _DAT_112f71a28);
              *(undefined1 *)(lVar8 + _DAT_112f71a38) = 0;
              *(undefined8 *)(lVar8 + _DAT_112f71a08) = param_13;
              *(undefined8 *)(lVar8 + _DAT_112f71a10) = param_12;
              func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
              func_0x000107c613fc();
              func_0x000107c61580(uVar21,2);
              func_0x000107c6157c(lVar10);
              func_0x000107c61174();
              func_0x000107c61174();
              uVar17 = param_12;
              func_0x0001000c2754();
              *(undefined8 *)(lVar8 + _DAT_112f71a18) = uVar17;
              func_0x000107c613fc(uVar16,0x20,7);
              func_0x0001000c6580();
              *(undefined8 *)(lVar8 + _DAT_112f71a20) = uVar16;
              plVar19 = &lStack_118;
              lStack_118 = lVar8;
              lStack_110 = lVar18;
              func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
              *(long **)(lVar11 + _DAT_112f71ba8) = plVar19;
              plVar19 = &lStack_128;
              lStack_128 = lVar11;
              lStack_120 = lVar13;
              func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
              func_0x000107c61574(lVar10);
              func_0x000107c61170(param_13);
              func_0x000107c61170(param_12);
              func_0x000107c61574(uVar21);
              func_0x000103486114(alStack_e0,0x112f712d8,&UNK_10dbcd2f0);
              func_0x0001000834e4(auStack_b8);
              func_0x0001000834e4(alStack_108);
              uVar21 = param_1;
              func_0x000107c4e9e4();
              func_0x000107c61180();
              func_0x000107c61174();
              func_0x000107c4fba8(uVar21);
              func_0x000107c615e8(lVar3);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar6);
              func_0x000107c615e8(lVar5);
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(param_3);
              func_0x000107c61574(lVar10);
              func_0x000107c61574(lVar9);
              func_0x000107c61574(lVar12);
              func_0x000107c61170(param_13);
              func_0x000107c61170(param_12);
              func_0x000107c61170(param_5);
              func_0x000107c61170(param_8);
              func_0x000107c61170(param_2);
              func_0x000107c61170(param_10);
              func_0x000107c61170(param_4);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_6);
              func_0x000107c61170(param_7);
              func_0x000107c61170(param_9);
              func_0x000107c61170(param_11);
              func_0x000107c61170(uVar21);
              func_0x000107c61170(plVar19);
              func_0x000107c61170(plVar19);
              func_0x000107c61170(uVar7);
              func_0x0001000834e4(auStack_90);
              return unaff_x20;
            }
            func_0x000107c61170(param_5);
            func_0x000107c61170(param_8);
            func_0x000107c61170(param_2);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_1);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_6);
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_11);
            func_0x000107c61170(param_12);
            func_0x000107c61170(param_13);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(uVar7);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar2);
            func_0x000103486114(auStack_b8,0x112dd4240,&UNK_10d996f00);
            return unaff_x20;
          }
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_8);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_11);
          func_0x000107c61170(param_12);
          func_0x000107c61170(param_13);
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c615e8(lVar2);
  }
  return unaff_x20;
}



/* Entry: 1034860b4; end: 1034860cf;  */

void FUN_1034860b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034860d0; end: 103486153;  */

long FUN_1034860d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103486154; end: 103487473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103486154(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             long param_6,long param_7,long param_8,undefined8 param_9,long param_10,
             undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  func_0x000107c613fc();
  lVar3 = param_6;
  func_0x000107c5d2b0();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + _DAT_113091b70);
    func_0x000107c41b80();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(param_8 + _DAT_113012d20);
    func_0x000107c6157c(uVar13);
    func_0x0001000d224c(&puStack_e8);
    func_0x000107c61574(uVar13);
    if (puStack_d0 == (undefined *)0x0) {
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      func_0x0001034875c0(&puStack_e8,0x112dd4240,&UNK_10d996f00);
      return unaff_x20;
    }
    func_0x000100b90ff0(&puStack_e8,auStack_90);
    lVar3 = *(long *)(param_3 + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x0001000834e4(auStack_90);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
    }
    else {
      lVar6 = param_7;
      func_0x000107c4b254();
      func_0x000107c61180();
      lVar4 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar4 == 0) {
        func_0x0001000834e4(auStack_90);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
      }
      else {
        lVar6 = param_4;
        func_0x000107c52030();
        func_0x000107c61180();
        lVar5 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar5 != 0) {
          func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
          uVar14 = *(undefined8 *)(*(long *)(param_10 + _DAT_1130818b8) + _DAT_113081858);
          func_0x000107c615f0(lVar4);
          func_0x000107c615f0(lVar1);
          func_0x000107c615f0(lVar3);
          func_0x000107c615f0(lVar5);
          func_0x000107c61174();
          uVar13 = uVar14;
          func_0x0001000bda74();
          func_0x000107c61170(uVar14);
          lVar6 = 0;
          FUN_10348b3f0();
          func_0x000107c613fc();
          *(long *)(lVar6 + 0x28) = lVar4;
          *(undefined8 *)(lVar6 + 0x30) = uVar13;
          *(long *)(lVar6 + 0x10) = lVar1;
          *(long *)(lVar6 + 0x18) = lVar3;
          *(long *)(lVar6 + 0x20) = lVar5;
          lVar7 = 0;
          func_0x000100b91074();
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined1 *)(lVar7 + 0x18) = 1;
          uVar13 = param_1;
          func_0x000107c5b7b4();
          func_0x000107c61180();
          lVar8 = 0;
          func_0x000103493578();
          func_0x000107c613fc();
          *(undefined8 *)(lVar8 + 0x10) = uVar13;
          puVar9 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          FUN_10348757c(auStack_90,auStack_b8);
          puVar10 = &UNK_11065b0f8;
          func_0x000107c613fc(&UNK_11065b0f8,0x70,7);
          *(undefined8 *)(puVar10 + 0x10) = param_5;
          *(long *)(puVar10 + 0x18) = lVar8;
          *(long *)(puVar10 + 0x20) = lVar6;
          *(undefined8 *)(puVar10 + 0x28) = uVar2;
          func_0x000100b90ff0(auStack_b8,puVar10 + 0x30);
          *(long *)(puVar10 + 0x58) = lVar7;
          *(undefined8 *)(puVar10 + 0x60) = param_13;
          *(undefined8 *)(puVar10 + 0x68) = param_11;
          pcStack_c8 = FUN_103487474;
          puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e0 = 0x42000000;
          pcStack_d8 = FUN_103487478;
          puStack_d0 = &UNK_11065b110;
          ppuVar11 = &puStack_e8;
          puStack_c0 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar10 = puStack_c0;
          func_0x000107c61174();
          func_0x000107c6157c(lVar8);
          func_0x000107c6157c(lVar6);
          func_0x000107c61174(uVar2);
          func_0x000107c6157c(lVar7);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61574(puVar10);
          func_0x000107c3e4fc(puVar9);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar11);
          puVar10 = PTR_PTR_1126c8338;
          func_0x000107c610f8(PTR_PTR_1126c8338);
          func_0x000107c47234();
          puVar12 = PTR_PTR_1126ad2e0;
          func_0x000107c610f8(PTR_PTR_1126ad2e0);
          func_0x000107c471ac();
          func_0x000107c42c20(param_12);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(param_5);
          func_0x000107c61574(lVar8);
          func_0x000107c61574(lVar6);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(lVar7);
          func_0x000107c61170(param_13);
          func_0x000107c61170(param_11);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_12);
          func_0x000107c61170(puVar12);
          func_0x0001000834e4(auStack_90);
          return unaff_x20;
        }
        func_0x0001000834e4(auStack_90);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c615e8(lVar1);
    param_13 = uVar2;
  }
  func_0x000107c61170(param_13);
  return unaff_x20;
}



/* Entry: 103487474; end: 103487477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103487474(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  FUN_10348b3f0();
  ppuStack_c0 = &PTR_DAT_11065b3e8;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_10348757c(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_10348757c(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_10348757c(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 2;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_10348757c(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_10348757c(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 2;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x0001034875c0(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 103487478; end: 1034874af;  */

void FUN_103487478(long param_1)

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



/* Entry: 1034874b0; end: 1034874cb;  */

void FUN_1034874b0(long param_1,long param_2)

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



/* Entry: 1034874cc; end: 103487527;  */

void FUN_1034874cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103487528; end: 10348755b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103487528(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  FUN_10348b3f0();
  ppuStack_c0 = &PTR_DAT_11065b3e8;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_10348757c(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_10348757c(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_10348757c(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 2;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_10348757c(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_10348757c(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 2;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x0001034875c0(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 10348755c; end: 10348757b;  */

void FUN_10348755c(void)

{
  func_0x000107c61168(&PTR_PTR_112f713c0);
  return;
}



/* Entry: 10348757c; end: 1034875ff;  */

long FUN_10348757c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103487600; end: 10348760b;  */

void FUN_103487600(long param_1,long param_2)

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



/* Entry: 10348760c; end: 103487813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10348760c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar2 = *(long *)(param_4 + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  else {
    lVar3 = 0;
    func_0x000100b91054();
    func_0x000107c613fc();
    func_0x000107c61614(lVar3 + 0x10,0);
    func_0x000107c61604(lVar3 + 0x10,lVar2);
    lVar4 = 0;
    func_0x000100b9390c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112f71e88) = lVar3;
    *(undefined8 *)(lVar5 + _DAT_112f71e90) = param_6;
    *(undefined8 *)(lVar5 + _DAT_112f71e98) = param_5;
    *(undefined1 *)(lVar5 + _DAT_112f71ea0) = 3;
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c6157c(lVar3);
    func_0x000107c61174();
    func_0x000107c61174(param_5);
    plVar6 = &lStack_70;
    func_0x000107c61154(plVar6,puVar1);
    uVar7 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c61174(plVar6);
    func_0x000107c4fba8(uVar7);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 103487814; end: 10348782f;  */

void FUN_103487814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103487830; end: 103488753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103487830(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,undefined8 param_7,long param_8,long param_9,undefined8 param_10,
             undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 unaff_x20;
  undefined8 uVar14;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  func_0x000107c613fc();
  lVar4 = param_8;
  func_0x000107c5d2e0();
  func_0x000107c61180();
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + _DAT_113091b70);
    func_0x000107c41b80();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(param_9 + _DAT_113012d20);
    func_0x000107c6157c(uVar14);
    func_0x0001000d224c(&puStack_e8);
    func_0x000107c61574(uVar14);
    if (puStack_d0 == (undefined *)0x0) {
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000103488da8(&puStack_e8,0x112dd4240,&UNK_10d996f00);
      return unaff_x20;
    }
    func_0x000100b90ff0(&puStack_e8,auStack_90);
    lVar4 = param_4;
    func_0x000107c4bff8();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) {
      func_0x0001000834e4(auStack_90);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
    }
    else {
      lVar4 = *(long *)(param_5 + _DAT_113083868);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x0001000834e4(auStack_90);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
      }
      else {
        lVar8 = param_6;
        func_0x000107c52030();
        func_0x000107c61180();
        lVar5 = lVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar5 != 0) {
          puVar6 = &UNK_11065b1d8;
          func_0x000107c613fc(&UNK_11065b1d8,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar3;
          func_0x0001000285a8(0x112f714b0,&UNK_10dbcd3d8);
          func_0x000107c613fc();
          func_0x000107c615f0(lVar3);
          pcVar7 = FUN_103488850;
          func_0x0001000bdd8c(FUN_103488850,puVar6);
          lVar8 = 0;
          func_0x00010348c2d8();
          func_0x000107c613fc();
          *(long *)(lVar8 + 0x10) = lVar1;
          *(long *)(lVar8 + 0x18) = lVar4;
          *(long *)(lVar8 + 0x20) = lVar5;
          *(code **)(lVar8 + 0x28) = pcVar7;
          func_0x000107c615f0(lVar1);
          func_0x000107c6157c(pcVar7);
          func_0x000107c615f0(lVar4);
          func_0x000107c615f0(lVar5);
          uVar14 = param_3;
          func_0x000107c5b1fc();
          func_0x000107c61180();
          lVar9 = 0;
          func_0x000103493474();
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x10) = uVar14;
          lVar10 = 0;
          func_0x000100b91074();
          func_0x000107c613fc();
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(undefined1 *)(lVar10 + 0x18) = 1;
          puVar11 = PTR_PTR_1126ae720;
          func_0x000107c61168();
          FUN_103488d64(auStack_90,auStack_b8);
          puVar6 = &UNK_11065b200;
          func_0x000107c613fc(&UNK_11065b200,0x70,7);
          *(undefined8 *)(puVar6 + 0x10) = param_7;
          *(long *)(puVar6 + 0x18) = lVar9;
          *(long *)(puVar6 + 0x20) = lVar8;
          *(undefined8 *)(puVar6 + 0x28) = uVar2;
          func_0x000100b90ff0(auStack_b8,puVar6 + 0x30);
          *(long *)(puVar6 + 0x58) = lVar10;
          *(undefined8 *)(puVar6 + 0x60) = param_13;
          *(undefined8 *)(puVar6 + 0x68) = param_11;
          pcStack_c8 = FUN_103488c94;
          puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e0 = 0x42000000;
          pcStack_d8 = FUN_103487478;
          puStack_d0 = &UNK_11065b218;
          ppuVar12 = &puStack_e8;
          puStack_c0 = puVar6;
          func_0x000107c60bc4(ppuVar12);
          puVar6 = puStack_c0;
          func_0x000107c61174();
          func_0x000107c6157c(lVar9);
          func_0x000107c6157c(lVar8);
          func_0x000107c61174();
          func_0x000107c6157c(lVar10);
          func_0x000107c61174();
          func_0x000107c61174(param_11);
          func_0x000107c61574(puVar6);
          func_0x000107c3e4fc(puVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar12);
          puVar6 = PTR_PTR_1126c8338;
          func_0x000107c610f8(PTR_PTR_1126c8338);
          func_0x000107c47234();
          puVar13 = PTR_PTR_1126ad2e8;
          func_0x000107c610f8(PTR_PTR_1126ad2e8);
          func_0x000107c471ac();
          func_0x000107c42c20(param_12);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar1);
          func_0x000107c61574(pcVar7);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(param_7);
          func_0x000107c61574(lVar9);
          func_0x000107c61574(lVar8);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(lVar10);
          func_0x000107c61170(param_13);
          func_0x000107c61170(param_11);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_8);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_12);
          func_0x000107c61170(puVar13);
          func_0x0001000834e4(auStack_90);
          return unaff_x20;
        }
        func_0x0001000834e4(auStack_90);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c615e8(lVar1);
    param_13 = uVar2;
  }
  func_0x000107c61170(param_13);
  return unaff_x20;
}



/* Entry: 103488754; end: 10348884f;  */

void FUN_103488754(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c4e340();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar3 = 0;
      lVar4 = 0;
      lVar6 = param_3;
    }
    else {
      lVar3 = lVar5;
      func_0x000107c5faec();
      lVar6 = param_3;
      func_0x000107c61170(lVar5);
      lVar4 = param_3;
    }
    lVar2 = lVar1;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
      lVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  return;
}



/* Entry: 103488850; end: 103488857;  */

void FUN_103488850(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4e340();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c5b3e8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar3 = 0;
      lVar4 = 0;
      lVar6 = param_3;
    }
    else {
      lVar3 = lVar5;
      func_0x000107c5faec();
      lVar6 = param_3;
      func_0x000107c61170(lVar5);
      lVar4 = param_3;
    }
    lVar2 = lVar1;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
      lVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  return;
}



/* Entry: 103488858; end: 103488c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103488858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(param_3);
  func_0x0001000b637c();
  uVar2 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar3 = 0;
  auStack_b8[0] = param_6;
  uStack_a0 = uVar2;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar4 = 0;
  auStack_e0[0] = param_3;
  uStack_c8 = uVar3;
  func_0x000100b91280();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar9 = _DAT_112f71bb0;
  lVar6 = 0;
  func_0x000100b913d8();
  pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar11)(lVar5 + lVar9,1,1,lVar6);
  *(undefined8 *)(lVar5 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f71bc8) = 0;
  FUN_103488d64(auStack_90,lVar5 + _DAT_112f71b50);
  *(undefined8 *)(lVar5 + _DAT_112f71b58) = param_2;
  FUN_103488d64(auStack_e0,lVar5 + _DAT_112f71b60);
  *(undefined8 *)(lVar5 + _DAT_112f71b68) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112f71b70) = param_8;
  puVar7 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(param_2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_6);
  func_0x000107c453e4();
  *(undefined **)(lVar5 + _DAT_112f71b78) = puVar7;
  uVar3 = 0;
  func_0x0001000c6560();
  uVar2 = uVar3;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + _DAT_112f71b80) = uVar2;
  FUN_103488d64(param_5,lVar5 + _DAT_112f71b88);
  *(undefined8 *)(lVar5 + _DAT_112f71b90) = param_4;
  *(undefined1 *)(lVar5 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar5 + _DAT_112f71ba0);
  lVar8 = 0;
  func_0x000100b925e4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  (*pcVar11)(lVar9 + _DAT_112f71a40,1,1,lVar6);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar9 + _DAT_112f719f8) = param_2;
  FUN_103488d64(auStack_e0,lVar9 + _DAT_112f71a00);
  *(undefined8 *)(lVar9 + _DAT_112f71a30) = param_4;
  FUN_103488d64(param_5,lVar9 + _DAT_112f71a28);
  *(undefined1 *)(lVar9 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar9 + _DAT_112f71a08) = param_7;
  *(undefined8 *)(lVar9 + _DAT_112f71a10) = param_8;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(param_4,2);
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_8;
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + _DAT_112f71a18) = uVar2;
  func_0x000107c613fc(uVar3,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + _DAT_112f71a20) = uVar3;
  plVar10 = &lStack_f0;
  lStack_f0 = lVar9;
  lStack_e8 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *(long **)(lVar5 + _DAT_112f71ba8) = plVar10;
  plVar10 = &lStack_100;
  lStack_100 = lVar5;
  lStack_f8 = lVar4;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(param_4);
  func_0x000103488da8(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar10;
}



/* Entry: 103488c94; end: 103488cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103488c94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_103488d64(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_103488d64(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_103488d64(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_103488d64(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_103488d64(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x000103488da8(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 103488cb4; end: 103488d0f;  */

void FUN_103488cb4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103488d10; end: 103488d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103488d10(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_103488d64(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_103488d64(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_103488d64(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_103488d64(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_103488d64(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x000103488da8(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 103488d44; end: 103488d63;  */

void FUN_103488d44(void)

{
  func_0x000107c61168(&PTR_PTR_112f714f8);
  return;
}



/* Entry: 103488d64; end: 103488de7;  */

long FUN_103488d64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103488de8; end: 103488df7;  */

void FUN_103488de8(long param_1,long param_2)

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



/* Entry: 103488df8; end: 103489aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103488df8(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
             long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
             undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  func_0x000107c613fc();
  lVar3 = param_6;
  func_0x000107c5d2e0();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + _DAT_113091b70);
    func_0x000107c41b80();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(param_7 + _DAT_113012d20);
    func_0x000107c6157c(uVar13);
    func_0x0001000d224c(&puStack_e8);
    func_0x000107c61574(uVar13);
    if (puStack_d0 == (undefined *)0x0) {
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      func_0x00010348a0ac(&puStack_e8,0x112dd4240,&UNK_10d996f00);
      return unaff_x20;
    }
    func_0x000100b90ff0(&puStack_e8,auStack_90);
    lVar3 = *(long *)(param_3 + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x0001000834e4(auStack_90);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
    }
    else {
      lVar7 = param_4;
      func_0x000107c52030();
      func_0x000107c61180();
      lVar4 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar4 != 0) {
        puVar5 = &UNK_11065b2e8;
        func_0x000107c613fc(&UNK_11065b2e8,0x18,7);
        *(long *)(puVar5 + 0x10) = param_1;
        func_0x0001000285a8(0x112f714b0,&UNK_10dbcd3d8);
        func_0x000107c613fc();
        func_0x000107c61174();
        pcVar6 = FUN_103489b54;
        func_0x0001000bdd8c(FUN_103489b54,puVar5);
        lVar7 = 0;
        func_0x00010348c2d8();
        func_0x000107c613fc();
        *(long *)(lVar7 + 0x10) = lVar1;
        *(long *)(lVar7 + 0x18) = lVar3;
        *(long *)(lVar7 + 0x20) = lVar4;
        *(code **)(lVar7 + 0x28) = pcVar6;
        uVar13 = *(undefined8 *)(param_1 + _DAT_11302bac8);
        lVar8 = 0;
        func_0x000103493538();
        func_0x000107c613fc();
        *(undefined8 *)(lVar8 + 0x10) = uVar13;
        lVar9 = 0;
        func_0x000100b91074();
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined1 *)(lVar9 + 0x18) = 1;
        puVar10 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        FUN_10348a068(auStack_90,auStack_b8);
        puVar5 = &UNK_11065b310;
        func_0x000107c613fc(&UNK_11065b310,0x70,7);
        *(undefined8 *)(puVar5 + 0x10) = param_5;
        *(long *)(puVar5 + 0x18) = lVar8;
        *(long *)(puVar5 + 0x20) = lVar7;
        *(undefined8 *)(puVar5 + 0x28) = uVar2;
        func_0x000100b90ff0(auStack_b8,puVar5 + 0x30);
        *(long *)(puVar5 + 0x58) = lVar9;
        *(undefined8 *)(puVar5 + 0x60) = param_11;
        *(undefined8 *)(puVar5 + 0x68) = param_9;
        pcStack_c8 = FUN_103489f98;
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0x42000000;
        pcStack_d8 = FUN_103487478;
        puStack_d0 = &UNK_11065b328;
        ppuVar11 = &puStack_e8;
        puStack_c0 = puVar5;
        func_0x000107c60bc4(ppuVar11);
        puVar5 = puStack_c0;
        func_0x000107c615f0(lVar1);
        func_0x000107c6157c(pcVar6);
        func_0x000107c615f0(lVar3);
        func_0x000107c615f0(lVar4);
        func_0x000107c615f0(uVar13);
        func_0x000107c61174();
        func_0x000107c6157c(lVar8);
        func_0x000107c6157c(lVar7);
        func_0x000107c61174();
        func_0x000107c6157c(lVar9);
        func_0x000107c61174(param_11);
        func_0x000107c61174(param_9);
        func_0x000107c61574(puVar5);
        func_0x000107c3e4fc(puVar10);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar11);
        puVar5 = PTR_PTR_1126c8338;
        func_0x000107c610f8(PTR_PTR_1126c8338);
        func_0x000107c47234();
        puVar12 = PTR_PTR_1126ad2f0;
        func_0x000107c610f8(PTR_PTR_1126ad2f0);
        func_0x000107c471ac();
        func_0x000107c42c20(param_10);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61574(pcVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(param_5);
        func_0x000107c61574(lVar8);
        func_0x000107c61574(lVar7);
        func_0x000107c61170(uVar2);
        func_0x000107c61574(lVar9);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_9);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_10);
        func_0x000107c61170(puVar12);
        func_0x0001000834e4(auStack_90);
        return unaff_x20;
      }
      func_0x0001000834e4(auStack_90);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c615e8(lVar1);
    param_11 = uVar2;
  }
  func_0x000107c61170(param_11);
  return unaff_x20;
}



/* Entry: 103489b00; end: 103489b53;  */

/* WARNING: Possible PIC construction at 0x000103489b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103489b44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103489b00(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_2 + _DAT_11302bae0))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_11302bae8);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11302bae0);
  param_1[1] = uVar2;
  uVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[3] = puVar1[1];
  param_1[2] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 103489b54; end: 103489b5b;  */

/* WARNING: Possible PIC construction at 0x000103489b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103489b44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103489b54(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11302bae0);
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11302bae8);
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  uVar3 = puVar2[1];
  uVar4 = *puVar2;
  param_1[3] = puVar2[1];
  param_1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar3);
  return;
}



/* Entry: 103489b5c; end: 103489f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103489b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(param_3);
  func_0x0001000b637c();
  uVar2 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar3 = 0;
  auStack_b8[0] = param_6;
  uStack_a0 = uVar2;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar4 = 0;
  auStack_e0[0] = param_3;
  uStack_c8 = uVar3;
  func_0x000100b91280();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar9 = _DAT_112f71bb0;
  lVar6 = 0;
  func_0x000100b913d8();
  pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar11)(lVar5 + lVar9,1,1,lVar6);
  *(undefined8 *)(lVar5 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f71bc8) = 0;
  FUN_10348a068(auStack_90,lVar5 + _DAT_112f71b50);
  *(undefined8 *)(lVar5 + _DAT_112f71b58) = param_2;
  FUN_10348a068(auStack_e0,lVar5 + _DAT_112f71b60);
  *(undefined8 *)(lVar5 + _DAT_112f71b68) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112f71b70) = param_8;
  puVar7 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(param_2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_6);
  func_0x000107c453e4();
  *(undefined **)(lVar5 + _DAT_112f71b78) = puVar7;
  uVar3 = 0;
  func_0x0001000c6560();
  uVar2 = uVar3;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + _DAT_112f71b80) = uVar2;
  FUN_10348a068(param_5,lVar5 + _DAT_112f71b88);
  *(undefined8 *)(lVar5 + _DAT_112f71b90) = param_4;
  *(undefined1 *)(lVar5 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar5 + _DAT_112f71ba0);
  lVar8 = 0;
  func_0x000100b925e4();
  lVar9 = lVar8;
  func_0x000107c610f8();
  (*pcVar11)(lVar9 + _DAT_112f71a40,1,1,lVar6);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar9 + _DAT_112f719f8) = param_2;
  FUN_10348a068(auStack_e0,lVar9 + _DAT_112f71a00);
  *(undefined8 *)(lVar9 + _DAT_112f71a30) = param_4;
  FUN_10348a068(param_5,lVar9 + _DAT_112f71a28);
  *(undefined1 *)(lVar9 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar9 + _DAT_112f71a08) = param_7;
  *(undefined8 *)(lVar9 + _DAT_112f71a10) = param_8;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(param_4,2);
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_8;
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + _DAT_112f71a18) = uVar2;
  func_0x000107c613fc(uVar3,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + _DAT_112f71a20) = uVar3;
  plVar10 = &lStack_f0;
  lStack_f0 = lVar9;
  lStack_e8 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *(long **)(lVar5 + _DAT_112f71ba8) = plVar10;
  plVar10 = &lStack_100;
  lStack_100 = lVar5;
  lStack_f8 = lVar4;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(param_4);
  func_0x00010348a0ac(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar10;
}



/* Entry: 103489f98; end: 103489fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103489f98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_10348a068(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_10348a068(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_10348a068(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_10348a068(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_10348a068(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x00010348a0ac(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 103489fb8; end: 10348a013;  */

void FUN_103489fb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10348a014; end: 10348a047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10348a014(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000d224c(auStack_90);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c6157c(uVar12);
  func_0x0001000b637c();
  uVar4 = 0;
  func_0x000100b91074();
  ppuStack_98 = &PTR_DAT_11065b8b0;
  uVar5 = 0;
  auStack_b8[0] = uVar11;
  uStack_a0 = uVar4;
  func_0x00010348c2d8();
  ppuStack_c0 = &PTR_DAT_11065b5c0;
  lVar6 = 0;
  auStack_e0[0] = uVar12;
  uStack_c8 = uVar5;
  func_0x000100b91280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar14 = _DAT_112f71bb0;
  lVar8 = 0;
  func_0x000100b913d8();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar17)(lVar7 + lVar14,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112f71bc8) = 0;
  FUN_10348a068(auStack_90,lVar7 + _DAT_112f71b50);
  *(undefined8 *)(lVar7 + _DAT_112f71b58) = uVar2;
  FUN_10348a068(auStack_e0,lVar7 + _DAT_112f71b60);
  *(undefined8 *)(lVar7 + _DAT_112f71b68) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f71b70) = uVar16;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f71b78) = puVar9;
  uVar11 = 0;
  func_0x0001000c6560();
  uVar12 = uVar11;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + _DAT_112f71b80) = uVar12;
  FUN_10348a068(unaff_x20 + 0x30,lVar7 + _DAT_112f71b88);
  *(undefined8 *)(lVar7 + _DAT_112f71b90) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112f71b98) = 1;
  func_0x000100b92594(auStack_b8,lVar7 + _DAT_112f71ba0);
  lVar13 = 0;
  func_0x000100b925e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  (*pcVar17)(lVar14 + _DAT_112f71a40,1,1,lVar8);
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f719f8) = uVar2;
  FUN_10348a068(auStack_e0,lVar14 + _DAT_112f71a00);
  *(undefined8 *)(lVar14 + _DAT_112f71a30) = uVar3;
  FUN_10348a068(unaff_x20 + 0x30,lVar14 + _DAT_112f71a28);
  *(undefined1 *)(lVar14 + _DAT_112f71a38) = 1;
  *(undefined8 *)(lVar14 + _DAT_112f71a08) = uVar10;
  *(undefined8 *)(lVar14 + _DAT_112f71a10) = uVar16;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(uVar3,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar16;
  func_0x0001000c2754();
  *(undefined8 *)(lVar14 + _DAT_112f71a18) = uVar12;
  func_0x000107c613fc(uVar11,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar14 + _DAT_112f71a20) = uVar11;
  plVar15 = &lStack_f0;
  lStack_f0 = lVar14;
  lStack_e8 = lVar13;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(lVar7 + _DAT_112f71ba8) = plVar15;
  plVar15 = &lStack_100;
  lStack_100 = lVar7;
  lStack_f8 = lVar6;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar3);
  func_0x00010348a0ac(auStack_b8,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_e0);
  return plVar15;
}



/* Entry: 10348a048; end: 10348a067;  */

void FUN_10348a048(void)

{
  func_0x000107c61168(&PTR_PTR_112f71590);
  return;
}



/* Entry: 10348a068; end: 10348a0eb;  */

long FUN_10348a068(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10348a0ec; end: 10348a0fb;  */

void FUN_10348a0ec(long param_1,long param_2)

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



/* Entry: 10348a0fc; end: 10348a8c7;  */

undefined * FUN_10348a0fc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined1 auStack_d40 [8];
  undefined8 uStack_d38;
  undefined1 auStack_d30 [8];
  undefined8 uStack_d28;
  undefined1 auStack_d20 [8];
  undefined8 uStack_d18;
  undefined1 auStack_d10 [16];
  undefined1 auStack_d00 [4];
  uint uStack_cfc;
  long lStack_cf8;
  long lStack_cf0;
  undefined1 *puStack_ce8;
  long lStack_ce0;
  long lStack_cd8;
  long lStack_cd0;
  long lStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  long lStack_cb0;
  undefined *puStack_ca8;
  undefined8 uStack_ca0;
  undefined1 auStack_c98 [776];
  undefined1 auStack_990 [776];
  undefined1 auStack_688 [776];
  undefined1 auStack_380 [784];
  
  lVar6 = 0;
  func_0x000100b91584();
  lStack_cd8 = *(long *)(lVar6 + -8);
  lStack_cd0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_cd8 + 0x40));
  lVar6 = 0x112d3b130;
  puStack_ce8 = auStack_d00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_d00 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar6 = 0x112f716a8;
  lStack_cb8 = lVar14;
  func_0x0001000285a8(0x112f716a8,&UNK_10dbcd4a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar6 = 0;
  lStack_cb0 = lVar14;
  func_0x000100b919a8();
  lStack_cc8 = *(long *)(lVar6 + -8);
  lStack_cc0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_cc8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_cf8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar6 = 0x112d373d8;
  lStack_cf0 = lVar14;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_ce0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  lVar6 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar14 - extraout_x8_04;
  lVar7 = 0;
  func_0x000100b913d8();
  uVar20 = *(undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x30));
  puVar8 = PTR_PTR_1126c7d80;
  func_0x000107c610f8();
  func_0x000107c47494(uVar20);
  puStack_ca8 = puVar8;
  FUN_10348ada4(unaff_x20 + *(int *)(lVar7 + 0x2c),lVar15,0x112d3b128,&UNK_10d996bb0);
  lVar9 = 0;
  func_0x000100b91acc();
  lVar6 = lVar15;
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar15,1,lVar9);
  iVar5 = (int)lVar6;
  if (iVar5 == 1) {
    func_0x00010348adec(lVar15,0x112d3b128,&UNK_10d996bb0);
    uStack_cfc = 0;
    uStack_ca0 = 0;
  }
  else {
    func_0x00010419e438();
    func_0x00010348ae70(lVar15,&SUB_100b91acc);
    uStack_ca0 = (ulong)CONCAT14(iVar5 == 1,(uint)(iVar5 == 3));
    uStack_cfc = (uint)(iVar5 == 2);
  }
  puVar8 = PTR_PTR_1126c7d90;
  func_0x000107c610f8(PTR_PTR_1126c7d90);
  func_0x000107c453e4();
  puVar10 = puVar8;
  func_0x000107c5ee70((long)*(int *)(lVar7 + 0x20));
  puVar11 = puVar8;
  func_0x000107c5e700(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  FUN_10348ada4(unaff_x20 + *(int *)(lVar7 + 0x24),lVar14,0x112d373d8,&UNK_10d9014c0);
  lVar12 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar12 + -8);
  pcVar19 = *(code **)(lVar18 + 0x30);
  lVar6 = lVar14;
  (*pcVar19)(lVar14,1,lVar12);
  lVar9 = 0;
  if ((int)lVar6 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar18 + 8))(lVar14,lVar12);
    lVar9 = lVar6;
  }
  puVar10 = puVar8;
  func_0x000107c5e57c(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar10);
  lVar6 = lStack_ce0;
  FUN_10348ada4(unaff_x20 + *(int *)(lVar7 + 0x28),lStack_ce0,0x112d373d8,&UNK_10d9014c0);
  lVar9 = lVar6;
  (*pcVar19)(lVar6,1,lVar12);
  if ((int)lVar9 == 1) {
    lVar9 = 0;
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar18 + 8))(lVar6,lVar12);
  }
  puVar10 = puVar8;
  func_0x000107c5e51c(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c5e88c(*(undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x1c)),puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e5f8(puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e5fc(puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61168(PTR_PTR_1126c7d60);
  func_0x000107c4a1b8();
  func_0x000107c5e5ec(puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar10 = puStack_ca8;
  func_0x000107c5e684(puVar8);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c610b4(auStack_688,unaff_x20 + *(int *)(lVar7 + 0x3c),0x301);
  iVar5 = (int)auStack_688;
  func_0x00010178e1e4();
  if (iVar5 == 1) {
    puVar16 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c610b4(auStack_380,auStack_688,0x301);
    func_0x0001042ca7c4(0);
    func_0x000107c610f8();
    func_0x000107c610b4(auStack_990,auStack_688,0x301);
    func_0x00010178e208(auStack_990,auStack_c98);
    puVar16 = auStack_380;
    func_0x0001042c6780(puVar16);
  }
  puVar11 = puVar8;
  func_0x000107c5e894(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar11);
  lVar9 = lStack_cb8;
  FUN_10348ada4(unaff_x20 + *(int *)(lVar7 + 0x18),lStack_cb8,0x112d3b130,&UNK_10d904950);
  lVar6 = lStack_cd0;
  lVar7 = lVar9;
  (**(code **)(lStack_cd8 + 0x30))(lVar9,1,lStack_cd0);
  puVar16 = puStack_ce8;
  if ((int)lVar7 == 1) {
    func_0x00010348adec(lVar9,0x112d3b130,&UNK_10d904950);
    lVar7 = lStack_cb0;
    (**(code **)(lStack_cc8 + 0x38))(lStack_cb0,1,1,lStack_cc0);
  }
  else {
    func_0x000100e3aef4(lVar9,puStack_ce8);
    puVar13 = puVar16;
    func_0x000107c614c4(puVar16,lVar6);
    lVar7 = lStack_cb0;
    lVar6 = lStack_cf8;
    bVar4 = (int)puVar13 != 2;
    if (bVar4) {
      func_0x00010348ae70(puVar16,&SUB_100b91584);
    }
    else {
      func_0x00010348ae2c(puVar16,lStack_cf8,&SUB_100b919a8);
      func_0x00010348ae2c(lVar6,lVar7,&SUB_100b919a8);
    }
    lVar14 = lStack_cc0;
    lVar6 = lStack_cc8;
    (**(code **)(lStack_cc8 + 0x38))(lVar7,bVar4,1,lStack_cc0);
    func_0x00010348ae70(lVar9,&SUB_100b91584);
    lVar9 = lVar7;
    (**(code **)(lVar6 + 0x30))(lVar7,1,lVar14);
    lVar6 = lStack_cf0;
    if ((int)lVar9 != 1) {
      lVar9 = lStack_cf0;
      func_0x00010348ae2c(lVar7,lStack_cf0,&SUB_100b919a8);
      uVar2 = uStack_cfc;
      uVar3 = uStack_ca0._4_4_;
      uVar17 = uStack_ca0 & 0xffffffff;
      uVar1 = (uint)uStack_ca0 | uStack_ca0._4_4_ | uStack_cfc;
      func_0x000107c5ed70();
      *(undefined1 *)(lVar15 + -0x10) = 1;
      *(undefined8 *)(lVar15 + -0x18) = 0;
      *(undefined1 *)(lVar15 + -0x20) = 1;
      *(undefined8 *)(lVar15 + -0x28) = 0;
      *(undefined1 *)(lVar15 + -0x30) = 1;
      *(undefined8 *)(lVar15 + -0x38) = 0;
      *(undefined1 *)(lVar15 + -0x40) = 0;
      func_0x00010420fe14(auStack_990,~uVar1 & 1,uVar17,uVar3,uVar2,lVar7,lVar9,0,0);
      func_0x0001042826f0(0);
      func_0x000107c610f8();
      puVar16 = auStack_990;
      func_0x000104281270(puVar16);
      puVar11 = puVar8;
      func_0x000107c5e4fc(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar11);
      func_0x00010348ae70(lVar6,&SUB_100b919a8);
      goto LAB_10348a87c;
    }
  }
  func_0x00010348adec(lVar7,0x112f716a8,&UNK_10dbcd4a0);
LAB_10348a87c:
  puVar11 = puVar8;
  func_0x000107c3ecc8(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  return puVar11;
}



/* Entry: 10348a8c8; end: 10348ad4f;  */

void FUN_10348a8c8(float param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d3b128;
  uStack_80 = param_8;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  puStack_a8 = auStack_c0 + -extraout_x8;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)(auStack_c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b0 = lVar9;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uStack_98 = param_13;
    uStack_90 = param_14;
    uStack_a0 = param_12;
    puVar4 = PTR_PTR_1126c7cc8;
    lStack_b8 = lVar9;
    uStack_84 = param_2;
    func_0x000107c610f8(PTR_PTR_1126c7cc8);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c549d4(puVar4);
    func_0x000107c61170(param_4);
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c59648(puVar4);
    func_0x000107c61170(param_6);
    if (param_9 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uStack_80;
      func_0x000107c5fadc(uStack_80,param_9);
    }
    func_0x000107c55e70(puVar4);
    func_0x000107c61170(uVar10);
    if (param_11 == 0) {
      param_10 = 0;
    }
    else {
      func_0x000107c5fadc(param_10,param_11);
    }
    func_0x000107c59478(puVar4);
    func_0x000107c61170(param_10);
    func_0x000107c59558(puVar4);
    func_0x000107c55e78(puVar4);
    func_0x000100e3aef4(uStack_90,lVar11);
    lVar5 = lVar11;
    func_0x000107c614c4(lVar11,lVar3);
    lVar9 = lStack_b0;
    lVar3 = lStack_b8;
    iVar2 = (int)lVar5;
    if (iVar2 == 2) {
      func_0x00010348ae70(lVar11,&SUB_100b919a8);
      puVar1 = puStack_a8;
      func_0x00010348ada4(param_16,puStack_a8,0x112d3b128,&UNK_10d996bb0);
      lVar3 = 0;
      func_0x000100b91acc();
      puVar7 = puVar1;
      (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar1,1,lVar3);
      if ((int)puVar7 != 1) {
        puVar7 = puVar1;
        func_0x000107c614c4(puVar1,lVar3);
        puVar8 = &SUB_100b91790;
        if ((int)puVar7 != 1) {
          puVar8 = &SUB_100b915bc;
        }
        func_0x00010348ae70(puVar1,puVar8);
      }
      func_0x000107c52990(puVar4);
      func_0x000107c53eec(puVar4);
    }
    else {
      if (iVar2 == 1) {
        func_0x00010348ae2c(lVar11,lStack_b0,&SUB_100b91790);
        func_0x000107c52990(puVar4);
        puVar8 = PTR___sSiN_11034deb0;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
        func_0x000107c55518(puVar4);
        func_0x000107c61170(puVar8);
        puVar8 = &SUB_100b91790;
      }
      else if (iVar2 == 0) {
        puVar8 = &SUB_100b915bc;
        lVar9 = lStack_b8;
        func_0x00010348ae2c(lVar11,lStack_b8,&SUB_100b915bc);
        puVar6 = puVar4;
        func_0x000107c52990(puVar4);
        func_0x000107c5ed70();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar9);
        func_0x000107c52998(puVar4);
        func_0x000107c61170(puVar6);
        lVar9 = 0;
        func_0x000100b913d8();
        dVar12 = (double)(long)(*(double *)(param_15 + *(int *)(lVar9 + 0x1c)) * 10.0) / 10.0;
        func_0x000107c5a594(dVar12,puVar4);
        param_1 = SUB84(dVar12,0);
        lVar9 = lVar3;
      }
      else {
        puVar8 = &SUB_100b91584;
        lVar9 = lVar11;
      }
      func_0x00010348ae70(lVar9,puVar8);
    }
    func_0x000107c574c4(puVar4);
    func_0x000107c4e144(*(undefined8 *)(param_3 + 0x20));
    func_0x000107c574f8((double)param_1,puVar4);
    func_0x000107c4bfb0(*(undefined8 *)(param_3 + 0x18));
    func_0x000107c61574(param_3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10348ad50; end: 10348ada3;  */

void FUN_10348ad50(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348ada4; end: 10348aeab;  */

undefined8 FUN_10348ada4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10348aeac; end: 10348b36f;  */

void FUN_10348aeac(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar7 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  lStack_c0 = *(long *)(lVar7 + -8);
  lStack_b8 = *(long *)(lStack_c0 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_b8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  puStack_b0 = auStack_120 + -extraout_x8;
  func_0x000100b913d8();
  puVar20 = *(undefined **)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)(auStack_120 + -extraout_x8) - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d3b130;
  puVar15 = &UNK_10d904950;
  lStack_c8 = extraout_x12;
  lStack_a0 = lVar13;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_00;
  lVar7 = 0;
  func_0x000100b91584();
  lVar18 = *(long *)(lVar7 + -8);
  lVar17 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000d224c(&puStack_98);
  puVar9 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    puStack_d8 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar8 = puStack_98;
    lStack_e8 = lVar6;
    puStack_e0 = puVar20;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar9);
    if (puVar8 == (undefined *)0x0) {
      puStack_d8 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar20 = puStack_e0;
      lVar6 = lStack_e8;
    }
    else {
      puVar9 = puVar8;
      func_0x000107c5faec();
      puStack_d8 = puVar9;
      func_0x000107c61170(puVar8);
      puVar20 = puStack_e0;
      lVar6 = lStack_e8;
    }
  }
  func_0x00010348b4dc((long)param_1 + (long)*(int *)(lVar6 + 0x18),lVar13,0x112d3b130,&UNK_10d904950
                     );
  lVar10 = lVar13;
  (**(code **)(lVar18 + 0x30))(lVar13,1,lVar7);
  if ((int)lVar10 == 1) {
    func_0x000107c6142c(puVar15);
    func_0x00010348b450(lVar13);
  }
  else {
    func_0x00010348b524(lVar13,lVar14,&SUB_100b91584);
    uStack_108 = *param_1;
    lStack_e8 = param_1[1];
    lStack_100 = param_1[3];
    if (lStack_100 == 0) {
      uStack_110 = 0;
      lStack_118 = -0x2000000000000000;
    }
    else {
      uStack_110 = param_1[2];
      lStack_118 = lStack_100;
    }
    iVar4 = *(int *)(lVar6 + 0x2c);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar9 = &UNK_11065b410;
    lStack_f0 = lVar18;
    puStack_e0 = puVar15;
    func_0x000107c613fc(&UNK_11065b410,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,unaff_x20);
    lVar13 = lStack_d0;
    func_0x00010348b498(lVar14,lStack_d0,&SUB_100b91584);
    func_0x00010348b498(param_1,lStack_a0,&SUB_100b913d8);
    puVar5 = puStack_b0;
    func_0x00010348b4dc((long)param_1 + (long)iVar4,puStack_b0,0x112d3b128,&UNK_10d996bb0);
    bVar1 = *(byte *)(lStack_f0 + 0x50);
    uVar19 = (ulong)bVar1 + 0x68 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = puVar20[0x50];
    uVar21 = lVar17 + (ulong)bVar2 + uVar19 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    bVar3 = *(byte *)(lStack_c0 + 0x50);
    uVar22 = lStack_c8 + (ulong)bVar3 + uVar21 & ((ulong)bVar3 ^ 0xffffffffffffffff);
    puVar15 = &UNK_11065b438;
    lStack_c0 = lVar14;
    func_0x000107c613fc(&UNK_11065b438,uVar22 + lStack_b8,bVar1 | bVar2 | bVar3 | 7);
    puVar20 = puStack_e0;
    lVar7 = lStack_e8;
    *(undefined **)(puVar15 + 0x10) = puVar9;
    *(undefined8 *)(puVar15 + 0x18) = uStack_108;
    *(long *)(puVar15 + 0x20) = lStack_e8;
    *(undefined8 *)(puVar15 + 0x28) = uStack_110;
    *(long *)(puVar15 + 0x30) = lStack_118;
    *(undefined **)(puVar15 + 0x38) = puStack_d8;
    *(undefined **)(puVar15 + 0x40) = puStack_e0;
    *(undefined8 *)(puVar15 + 0x48) = 0;
    *(undefined8 *)(puVar15 + 0x50) = 0;
    *(undefined8 *)(puVar15 + 0x60) = 2;
    *(undefined8 *)(puVar15 + 0x58) = 0x6a;
    func_0x00010348b524(lVar13,puVar15 + uVar19,&SUB_100b91584);
    func_0x00010348b524(lStack_a0,puVar15 + uVar21,&SUB_100b913d8);
    func_0x00010348b568(puVar5,puVar15 + uVar22);
    pcStack_78 = FUN_10348b5b8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ab47f8;
    puStack_80 = &UNK_11065b450;
    ppuVar11 = &puStack_98;
    puStack_70 = puVar15;
    func_0x000107c60bc4(ppuVar11);
    puVar15 = puStack_70;
    func_0x000107c61434(puVar20);
    func_0x000107c61434(lVar7);
    func_0x000107c61434(lStack_100);
    func_0x000107c61574(puVar15);
    func_0x000107c3f988(uStack_f8);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c6142c(puVar20);
    lVar13 = lStack_c0;
    func_0x000102852dc4(lStack_c0);
  }
  FUN_10348a0fc();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *param_1;
  func_0x000107c5fadc(uVar12,param_1[1]);
  func_0x000107c5cd84(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c53234(uVar16);
  func_0x000107c61170(lVar13);
  func_0x0001000d224c(&puStack_98);
  puVar15 = puStack_98;
  if (puStack_98 != (undefined *)0x0) {
    puVar9 = puStack_98;
    func_0x000107c4a3e0();
    if (((ulong)puVar9 & 1) != 0) {
      func_0x000107c5073c(puVar15);
    }
    func_0x000107c615e8(puVar15);
  }
  return;
}



/* Entry: 10348b370; end: 10348b38b;  */

void FUN_10348b370(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10348b38c; end: 10348b3ef;  */

void FUN_10348b38c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348b3f0; end: 10348b40f;  */

void FUN_10348b3f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f716f0);
  return;
}



/* Entry: 10348b410; end: 10348b5b7;  */

void FUN_10348b410(void)

{
  FUN_10348b6a8();
  return;
}



/* Entry: 10348b5b8; end: 10348b68b;  */

void FUN_10348b5b8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  func_0x000100b91584();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x68 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  func_0x000100b913d8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar5 = uVar3 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10348a8c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),unaff_x20 + uVar3,unaff_x20 + uVar5,
                unaff_x20 + (uVar5 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10348b68c; end: 10348b6a7;  */

void FUN_10348b68c(long param_1,long param_2)

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



/* Entry: 10348b6a8; end: 10348b6ff;  */

void FUN_10348b6a8(void)

{
  ulong uVar1;
  long unaff_x20;
  ulong uStack_28;
  
  func_0x000107c4de0c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000d224c(&uStack_28);
  if (uStack_28 != 0) {
    uVar1 = uStack_28;
    func_0x000107c4a3e0();
    if ((uVar1 & 1) == 0) {
      func_0x000107c4e47c(uStack_28);
    }
    func_0x000107c615e8(uStack_28);
  }
  return;
}



/* Entry: 10348b700; end: 10348bb5f;  */

void FUN_10348b700(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar8 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  lStack_d0 = *(long *)(lVar8 + -8);
  lStack_c8 = *(long *)(lStack_d0 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_c8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  puStack_b8 = auStack_120 + -extraout_x8;
  func_0x000100b913d8();
  lStack_d8 = *(long *)(lVar7 + -8);
  lVar21 = *(long *)(lStack_d8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)(auStack_120 + -extraout_x8) - (lVar21 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d3b130;
  puVar15 = &UNK_10d904950;
  lStack_c0 = lVar13;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_00;
  lVar8 = 0;
  func_0x000100b91584();
  lVar19 = *(long *)(lVar8 + -8);
  lVar16 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a0 = lVar14 - extraout_x12;
  lVar14 = *(long *)(unaff_x20 + 0x28);
  lStack_a8 = lVar14;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (lVar14 == 0) {
    lStack_e0 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar9 = lVar14;
    func_0x000107c5faec();
    lStack_e0 = lVar9;
    func_0x000107c61170(lVar14);
  }
  func_0x00010348bc1c((long)param_1 + (long)*(int *)(lVar7 + 0x18),lVar13,0x112d3b130,&UNK_10d904950
                     );
  lVar14 = lVar13;
  (**(code **)(lVar19 + 0x30))(lVar13,1,lVar8);
  if ((int)lVar14 == 1) {
    func_0x000107c6142c(puVar15);
    func_0x00010348b450(lVar13);
  }
  else {
    func_0x00010348bc64(lVar13,lStack_a0,&SUB_100b91584);
    uStack_108 = *param_1;
    uStack_f0 = param_1[1];
    lStack_100 = param_1[3];
    if (lStack_100 == 0) {
      uStack_110 = 0;
      lStack_118 = -0x2000000000000000;
    }
    else {
      uStack_110 = param_1[2];
      lStack_118 = lStack_100;
    }
    iVar4 = *(int *)(lVar7 + 0x2c);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar10 = &UNK_11065b4b8;
    puStack_e8 = puVar15;
    func_0x000107c613fc(&UNK_11065b4b8,0x18,7);
    func_0x000107c61644(puVar10 + 0x10);
    func_0x00010348bbd8(lStack_a0,lStack_b0,&SUB_100b91584);
    lVar8 = lStack_c0;
    func_0x00010348bbd8(param_1,lStack_c0,&SUB_100b913d8);
    puVar6 = puStack_b8;
    func_0x00010348bc1c((long)param_1 + (long)iVar4,puStack_b8,0x112d3b128,&UNK_10d996bb0);
    bVar1 = *(byte *)(lVar19 + 0x50);
    uVar18 = (ulong)bVar1 + 0x68 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(lStack_d8 + 0x50);
    uVar20 = lVar16 + (ulong)bVar2 + uVar18 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    bVar3 = *(byte *)(lStack_d0 + 0x50);
    uVar22 = lVar21 + (ulong)bVar3 + uVar20 & ((ulong)bVar3 ^ 0xffffffffffffffff);
    puVar15 = &UNK_11065b4e0;
    func_0x000107c613fc(&UNK_11065b4e0,uVar22 + lStack_c8,bVar1 | bVar2 | bVar3 | 7);
    puVar5 = puStack_e8;
    uVar12 = uStack_f0;
    *(undefined **)(puVar15 + 0x10) = puVar10;
    *(undefined8 *)(puVar15 + 0x18) = uStack_108;
    *(undefined8 *)(puVar15 + 0x20) = uStack_f0;
    *(undefined8 *)(puVar15 + 0x28) = uStack_110;
    *(long *)(puVar15 + 0x30) = lStack_118;
    *(long *)(puVar15 + 0x38) = lStack_e0;
    *(undefined8 *)(puVar15 + 0x48) = 0;
    *(undefined8 *)(puVar15 + 0x50) = 0;
    *(undefined **)(puVar15 + 0x40) = puStack_e8;
    *(undefined8 *)(puVar15 + 0x60) = 0;
    *(undefined8 *)(puVar15 + 0x58) = 0x3a;
    func_0x00010348bc64(lStack_b0,puVar15 + uVar18,&SUB_100b91584);
    func_0x00010348bc64(lVar8,puVar15 + uVar20,&SUB_100b913d8);
    func_0x00010348b568(puVar6,puVar15 + uVar22);
    pcStack_78 = FUN_10348bca8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ab47f8;
    puStack_80 = &UNK_11065b4f8;
    ppuVar11 = &puStack_98;
    puStack_70 = puVar15;
    func_0x000107c60bc4(ppuVar11);
    puVar15 = puStack_70;
    func_0x000107c61434(puVar5);
    func_0x000107c61434(uVar12);
    func_0x000107c61434(lStack_100);
    func_0x000107c61574(puVar15);
    func_0x000107c3f988(uStack_f8);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c6142c(puVar5);
    lVar13 = lStack_a0;
    func_0x000102852dc4(lStack_a0);
  }
  FUN_10348a0fc();
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *param_1;
  func_0x000107c5fadc(uVar12,param_1[1]);
  func_0x000107c5cd84(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c53234(uVar17);
  func_0x000107c61170(lVar13);
  func_0x000107c5cdbc(lStack_a8);
  return;
}



/* Entry: 10348bb60; end: 10348bb67;  */

void FUN_10348bb60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10348bb68; end: 10348bba3;  */

void FUN_10348bb68(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348bba4; end: 10348bbb7;  */

void FUN_10348bba4(undefined8 param_1,ulong param_2)

{
  long *unaff_x20;
  
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e8fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*unaff_x20 + 0x28),PTR_s_openAttachmentViewWithLensCarous_112617e08);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e8fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x28),PTR_s_openAttachmentView_112617e00);
  return;
}



/* Entry: 10348bbb8; end: 10348bca7;  */

void FUN_10348bbb8(void)

{
  FUN_10348b700();
  return;
}



/* Entry: 10348bca8; end: 10348bd7b;  */

void FUN_10348bca8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  func_0x000100b91584();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x68 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  func_0x000100b913d8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar5 = uVar3 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10348a8c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),unaff_x20 + uVar3,unaff_x20 + uVar5,
                unaff_x20 + (uVar5 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10348bd7c; end: 10348bd97;  */

void FUN_10348bd7c(long param_1,long param_2)

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



/* Entry: 10348bd98; end: 10348c293;  */

void FUN_10348bd98(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar18 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  lVar12 = *(long *)(lVar18 + -8);
  lVar17 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_190 - extraout_x8;
  lVar6 = 0;
  func_0x000100b913d8();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar13 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8_00;
  lVar7 = 0;
  func_0x000100b91584();
  lVar22 = *(long *)(lVar7 + -8);
  lVar18 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar19 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_138 = extraout_x13;
  lStack_128 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  FUN_10348a0fc();
  uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *param_1;
  uVar1 = param_1[1];
  uStack_130 = uVar8;
  func_0x000107c5fadc();
  func_0x000107c5cd84(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c53234(uVar20);
  func_0x000107c61170(lVar18);
  func_0x0001000d224c(auStack_88);
  func_0x000107c6142c(uStack_80);
  uStack_148 = uStack_70;
  uStack_150 = uStack_78;
  func_0x0001000d224c(&uStack_b0);
  uStack_158 = uStack_a8;
  uStack_160 = uStack_b0;
  func_0x000107c6142c(uStack_98);
  func_0x00010348c560((long)param_1 + (long)*(int *)(lVar6 + 0x18),lVar19,0x112d3b130,&UNK_10d904950
                     );
  lVar18 = lVar19;
  (**(code **)(lVar22 + 0x30))(lVar19,1,lVar7);
  if ((int)lVar18 == 1) {
    func_0x000107c6142c(uStack_a8);
    func_0x000107c6142c(uStack_70);
    func_0x00010348b450(lVar19);
  }
  else {
    uStack_170 = uStack_a8;
    func_0x00010348c5a8(lVar19,lVar16,&SUB_100b91584);
    lVar18 = param_1[3];
    uStack_168 = uStack_70;
    if (lVar18 == 0) {
      uStack_188 = 0;
      lStack_190 = -0x2000000000000000;
    }
    else {
      uStack_188 = param_1[2];
      lStack_190 = lVar18;
    }
    iVar5 = *(int *)(lVar6 + 0x2c);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar9 = &UNK_11065b5e8;
    func_0x000107c613fc(&UNK_11065b5e8,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,unaff_x20);
    lVar6 = lStack_128;
    lStack_180 = lVar16;
    func_0x00010348c51c(lVar16,lStack_128,&SUB_100b91584);
    func_0x00010348c51c(param_1,lVar15,&SUB_100b913d8);
    func_0x00010348c560((long)param_1 + (long)iVar5,lVar13,0x112d3b128,&UNK_10d996bb0);
    bVar2 = *(byte *)(lVar22 + 0x50);
    uVar21 = (ulong)bVar2 + 0x68 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    bVar3 = *(byte *)(lVar14 + 0x50);
    uVar23 = lStack_138 + (ulong)bVar3 + uVar21 & ((ulong)bVar3 ^ 0xffffffffffffffff);
    bVar4 = *(byte *)(lVar12 + 0x50);
    uVar24 = extraout_x12 + (ulong)bVar4 + uVar23 & ((ulong)bVar4 ^ 0xffffffffffffffff);
    puVar10 = &UNK_11065b610;
    func_0x000107c613fc(&UNK_11065b610,uVar24 + lVar17,bVar2 | bVar3 | bVar4 | 7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined8 *)(puVar10 + 0x18) = uStack_130;
    *(undefined8 *)(puVar10 + 0x20) = uVar1;
    *(undefined8 *)(puVar10 + 0x28) = uStack_188;
    *(long *)(puVar10 + 0x30) = lStack_190;
    *(undefined8 *)(puVar10 + 0x50) = uStack_158;
    *(undefined8 *)(puVar10 + 0x48) = uStack_160;
    *(undefined8 *)(puVar10 + 0x40) = uStack_148;
    *(undefined8 *)(puVar10 + 0x38) = uStack_150;
    *(undefined8 *)(puVar10 + 0x60) = 0x17;
    *(undefined8 *)(puVar10 + 0x58) = 0xa9;
    func_0x00010348c5a8(lVar6,puVar10 + uVar21,&SUB_100b91584);
    func_0x00010348c5a8(lVar15,puVar10 + uVar23,&SUB_100b913d8);
    func_0x00010348b568(lVar13,puVar10 + uVar24);
    pcStack_c0 = FUN_10348c5ec;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_100ab47f8;
    puStack_c8 = &UNK_11065b628;
    ppuVar11 = &puStack_e0;
    puStack_b8 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_b8;
    uVar8 = uStack_170;
    func_0x000107c61434(uStack_170);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar18);
    uVar1 = uStack_168;
    func_0x000107c61434(uStack_168);
    func_0x000107c61574(puVar9);
    func_0x000107c3f988(uStack_178);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar8);
    func_0x000102852dc4(lStack_180);
  }
  return;
}



/* Entry: 10348c294; end: 10348c29b;  */

void FUN_10348c294(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10348c29c; end: 10348c2f7;  */

void FUN_10348c29c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348c2f8; end: 10348c387;  */

long FUN_10348c2f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10348c388; end: 10348c3f3;  */

undefined8 * FUN_10348c388(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 10348c3f4; end: 10348c437;  */

undefined8 * FUN_10348c3f4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 10348c438; end: 10348c4fb;  */

int FUN_10348c438(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10348c4fc; end: 10348c5eb;  */

void FUN_10348c4fc(void)

{
  FUN_10348bd98();
  return;
}



/* Entry: 10348c5ec; end: 10348c6bf;  */

void FUN_10348c5ec(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  func_0x000100b91584();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x68 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  func_0x000100b913d8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar5 = uVar3 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10348a8c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),unaff_x20 + uVar3,unaff_x20 + uVar5,
                unaff_x20 + (uVar5 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10348c6c0; end: 10348c6db;  */

void FUN_10348c6c0(long param_1,long param_2)

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



/* Entry: 10348c6dc; end: 10348cb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348c6dc(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar8);
  (**(code **)(lVar2 + 8))(auStack_88,0x30000020100 >> ((param_4 & 7) << 3),uVar8,lVar2);
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000b637c();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  func_0x000100b925e4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112f71a40;
  lVar6 = 0;
  func_0x000100b913d8();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar5 + lVar2,1,1,lVar6);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar5 + _DAT_112f719f8) = param_2;
  func_0x00010348cc00(param_3,lVar5 + _DAT_112f71a00);
  *(undefined8 *)(lVar5 + _DAT_112f71a30) = uVar3;
  func_0x00010348cc00(auStack_88,lVar5 + _DAT_112f71a28);
  *(char *)(lVar5 + _DAT_112f71a38) = (char)param_4;
  *(undefined8 *)(lVar5 + _DAT_112f71a08) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112f71a10) = uVar7;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0();
  func_0x0001000c2754();
  *(undefined8 *)(lVar5 + _DAT_112f71a18) = uVar7;
  uVar8 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + _DAT_112f71a20) = uVar8;
  plVar9 = &lStack_98;
  lStack_98 = lVar5;
  lStack_90 = lVar4;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar3);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11065b688;
  *param_1 = (long)plVar9;
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 10348cb64; end: 10348cbbf;  */

void FUN_10348cb64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348cbc0; end: 10348cc43;  */

void FUN_10348cbc0(void)

{
  FUN_10348c6dc();
  return;
}



/* Entry: 10348cc44; end: 10348cfcf;  */

uint FUN_10348cc44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  long extraout_x8;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_260;
  code *apcStack_258 [7];
  long lStack_220;
  undefined8 auStack_210 [14];
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
  undefined1 uStack_f0;
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
  
  lVar9 = 0;
  func_0x000100b91584();
  lStack_220 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar19 = (long)&uStack_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  FUN_1037c76fc();
  lVar20 = *(long *)(lVar9 + -8);
  lVar16 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar19 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  FUN_10348ef50(param_1,lVar18,FUN_1037c76fc);
  uVar15 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar21 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar10 = &UNK_11065b6d8;
  func_0x000107c613fc(&UNK_11065b6d8,uVar21 + lVar16,uVar15 | 7);
  func_0x00010348f29c(lVar18,puVar10 + uVar21,FUN_1037c76fc);
  puVar11 = &UNK_11065b700;
  func_0x000107c613fc(&UNK_11065b700,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  uVar12 = 0;
  func_0x0001041b8338(0);
  func_0x000107c610f8();
  pcVar13 = FUN_10348eef4;
  func_0x0001041b812c(FUN_10348eef4,puVar10,FUN_10348ef48,puVar11,uVar12);
  iVar6 = *(int *)(lVar9 + 0x14);
  lVar16 = 0;
  apcStack_258[6] = pcVar13;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar16 + -8) + 0x10))(lVar19,(long)param_1 + (long)iVar6,lVar16);
  uVar17 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
  uStack_108 = puVar1[5];
  uStack_110 = puVar1[4];
  uStack_f8 = puVar1[7];
  uStack_100 = puVar1[6];
  uStack_f0 = *(undefined1 *)(puVar1 + 8);
  uStack_128 = puVar1[1];
  uStack_130 = *puVar1;
  uStack_118 = puVar1[3];
  uStack_120 = puVar1[2];
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20));
  uStack_98 = puVar2[9];
  uStack_a0 = puVar2[8];
  uStack_88 = puVar2[0xb];
  uStack_90 = puVar2[10];
  uStack_78 = puVar2[0xd];
  uStack_80 = puVar2[0xc];
  uStack_b8 = puVar2[5];
  uStack_c0 = puVar2[4];
  uStack_a8 = puVar2[7];
  uStack_b0 = puVar2[6];
  uStack_d8 = puVar2[1];
  uStack_e0 = *puVar2;
  uStack_c8 = puVar2[3];
  uStack_d0 = puVar2[2];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
  uVar12 = *puVar3;
  uVar4 = puVar3[1];
  apcStack_258[2] = (code *)puVar3[2];
  apcStack_258[1] = (code *)puVar3[3];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
  apcStack_258[4] = (code *)*puVar3;
  uVar5 = puVar3[1];
  uStack_260._4_4_ = (uint)*(byte *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
  apcStack_258[3] = (code *)*puVar3;
  apcStack_258[0] = (code *)puVar3[1];
  lVar9 = 0;
  apcStack_258[5] = (code *)uVar5;
  func_0x000100b915bc();
  *(undefined8 *)(lVar19 + *(int *)(lVar9 + 0x14)) = uVar17;
  puVar3 = (undefined8 *)(lVar19 + *(int *)(lVar9 + 0x18));
  uVar17 = puVar1[4];
  uVar23 = puVar1[7];
  uVar22 = puVar1[6];
  puVar3[5] = puVar1[5];
  puVar3[4] = uVar17;
  puVar3[7] = uVar23;
  puVar3[6] = uVar22;
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar1 + 8);
  uVar23 = *puVar1;
  uVar22 = puVar1[3];
  uVar17 = puVar1[2];
  puVar3[1] = puVar1[1];
  *puVar3 = uVar23;
  puVar3[3] = uVar22;
  puVar3[2] = uVar17;
  pcVar14 = apcStack_258[6];
  *(code **)(lVar19 + *(int *)(lVar9 + 0x1c)) = apcStack_258[6];
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar9 + 0x20));
  uVar17 = puVar2[8];
  uVar23 = puVar2[0xb];
  uVar22 = puVar2[10];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar17;
  puVar1[0xb] = uVar23;
  puVar1[10] = uVar22;
  uVar17 = puVar2[0xc];
  puVar1[0xd] = puVar2[0xd];
  puVar1[0xc] = uVar17;
  uVar17 = *puVar2;
  uVar23 = puVar2[3];
  uVar22 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar23;
  puVar1[2] = uVar22;
  uVar23 = puVar2[4];
  uVar22 = puVar2[7];
  uVar17 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar23;
  puVar1[7] = uVar22;
  puVar1[6] = uVar17;
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar9 + 0x24));
  *puVar1 = uVar12;
  puVar1[1] = uVar4;
  pcVar8 = apcStack_258[2];
  pcVar7 = apcStack_258[1];
  puVar1[2] = apcStack_258[2];
  puVar1[3] = pcVar7;
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar9 + 0x28));
  *puVar1 = apcStack_258[4];
  puVar1[1] = uVar5;
  *(char *)(lVar19 + *(int *)(lVar9 + 0x2c)) = (char)uStack_260._4_4_;
  pcVar13 = apcStack_258[0];
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar9 + 0x30));
  *puVar1 = apcStack_258[3];
  puVar1[1] = pcVar13;
  *(undefined1 *)(lVar19 + *(int *)(lVar9 + 0x34)) = 0;
  func_0x000107c6159c(lVar19,lStack_220,0);
  lStack_220 = *param_1;
  uVar5 = param_1[1];
  uStack_158 = puVar2[9];
  uStack_160 = puVar2[8];
  uStack_148 = puVar2[0xb];
  uStack_150 = puVar2[10];
  uStack_138 = puVar2[0xd];
  uStack_140 = puVar2[0xc];
  uStack_198 = puVar2[1];
  uStack_1a0 = *puVar2;
  uStack_188 = puVar2[3];
  uStack_190 = puVar2[2];
  uStack_178 = puVar2[5];
  uStack_180 = puVar2[4];
  uStack_168 = puVar2[7];
  uStack_170 = puVar2[6];
  FUN_10348f074(&uStack_130,auStack_210,0x112f71a98,&UNK_10dc0f000);
  func_0x000100e3eca0(&uStack_e0,auStack_210);
  func_0x000100e3ecdc(uVar12,uVar4,pcVar8,pcVar7);
  func_0x000107c61434(pcVar13);
  func_0x000107c61174(pcVar14);
  func_0x000107c61434(apcStack_258[5]);
  lVar9 = lStack_220;
  FUN_10348d284(lStack_220,uVar5,lVar19,&uStack_1a0);
  func_0x000107c61170(pcVar14);
  func_0x00010348f260(lVar19,&SUB_100b91584);
  return (uint)lVar9 & 1;
}



/* Entry: 10348cfd0; end: 10348d283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348cfd0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_6d8 [776];
  undefined1 auStack_3d0 [776];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71a40;
    func_0x000107c61428(lVar5,auStack_80,0x21,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      func_0x000107c61174(param_1);
      func_0x0001042c3e04(auStack_6d8);
      func_0x00010178e4b0(auStack_6d8);
      iVar1 = *(int *)(lVar3 + 0x3c);
      func_0x000107c610b4(auStack_3d0,lVar5 + iVar1,0x301);
      func_0x000107c610b4(lVar5 + iVar1,auStack_6d8,0x301);
      func_0x000107c614a8(auStack_80);
      FUN_10348f220(auStack_3d0,0x112dcbc48,&UNK_10d98e2c0);
    }
    else {
      func_0x000107c614a8(auStack_80);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_3d0,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71a40;
    func_0x000107c61428(lVar5,auStack_6d8,1,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      *(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x30)) = *(undefined8 *)(param_1 + _DAT_11306ba00);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71a40;
    func_0x000107c61428(lVar5,auStack_98,1,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      *(undefined1 *)(lVar5 + *(int *)(lVar3 + 0x34)) = *(undefined1 *)(param_1 + _DAT_11306b9f8);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112f71a40;
    func_0x000107c61428(lVar2,auStack_c8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar2,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar2 + *(int *)(lVar4 + 0x38)) = *(undefined1 *)(param_1 + _DAT_11306b9f0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10348d284; end: 10348d85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348d284(ulong param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar13;
  ulong *puVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong auStack_3e0 [8];
  undefined *puStack_3a0;
  ulong uStack_398;
  code *apcStack_390 [4];
  ulong auStack_370 [98];
  
  lVar4 = 0;
  auStack_3e0[6] = param_3;
  func_0x000100b91584();
  auStack_3e0[7] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = (long)auStack_3e0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112f71aa0;
  auStack_3e0[5] = extraout_x12;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  auStack_3e0[4] = uVar12 - extraout_x8;
  func_0x000100b913d8();
  auStack_3e0[3] = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_3e0[3] + 0x40));
  puVar14 = (ulong *)((uVar12 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f71a48);
  uVar11 = puVar1[1];
  if (uVar11 != 0) {
    uVar6 = *puVar1;
    if (uVar6 == param_1 && uVar11 == param_2) {
      return;
    }
    func_0x000107c605b8(uVar6,uVar11,param_1,param_2,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    auStack_3e0[2] = uVar12;
    FUN_10348db58();
    uVar12 = auStack_3e0[2];
  }
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112f719f8);
  auStack_3e0[1] = param_1;
  func_0x000107c5d17c();
  func_0x000107c61180();
  if (uVar11 == 0) {
    return;
  }
  iVar3 = *(int *)(lVar5 + 0x20);
  auStack_3e0[0] = uVar11;
  auStack_3e0[2] = uVar12;
  func_0x000107c61434(param_2);
  func_0x000100e3eca0(param_4,auStack_370);
  func_0x000107c5eea0((long)puVar14 + (long)iVar3);
  (**(code **)(auStack_3e0[7] + 0x38))((long)puVar14 + (long)*(int *)(lVar5 + 0x18),1,1,lVar4);
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar5 + 0x1c)) = 0;
  iVar3 = *(int *)(lVar5 + 0x24);
  lVar4 = 0;
  func_0x000107c5eea4();
  pcVar15 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar15)((long)puVar14 + (long)iVar3,1,1,lVar4);
  (*pcVar15)((long)puVar14 + (long)*(int *)(lVar5 + 0x28),1,1,lVar4);
  iVar3 = *(int *)(lVar5 + 0x2c);
  lVar4 = 0;
  func_0x000100b91acc();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)puVar14 + (long)iVar3,1,1,lVar4);
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar5 + 0x30)) = 0;
  *(undefined1 *)((long)puVar14 + (long)*(int *)(lVar5 + 0x34)) = 0;
  *(undefined1 *)((long)puVar14 + (long)*(int *)(lVar5 + 0x38)) = 0;
  iVar3 = *(int *)(lVar5 + 0x3c);
  func_0x00010178e4b4(auStack_370);
  func_0x000107c610b4((long)puVar14 + (long)iVar3,auStack_370,0x301);
  uVar12 = auStack_3e0[1];
  *puVar14 = auStack_3e0[1];
  puVar14[1] = param_2;
  uVar11 = param_4[8];
  uVar16 = param_4[0xb];
  uVar6 = param_4[10];
  puVar14[0xb] = param_4[9];
  puVar14[10] = uVar11;
  puVar14[0xd] = uVar16;
  puVar14[0xc] = uVar6;
  uVar11 = param_4[0xc];
  puVar14[0xf] = param_4[0xd];
  puVar14[0xe] = uVar11;
  uVar11 = *param_4;
  uVar16 = param_4[3];
  uVar6 = param_4[2];
  puVar14[3] = param_4[1];
  puVar14[2] = uVar11;
  puVar14[5] = uVar16;
  puVar14[4] = uVar6;
  uVar11 = auStack_3e0[4];
  uVar17 = param_4[4];
  uVar16 = param_4[7];
  uVar6 = param_4[6];
  puVar14[7] = param_4[5];
  puVar14[6] = uVar17;
  puVar14[9] = uVar16;
  puVar14[8] = uVar6;
  FUN_10348ef50(puVar14,auStack_3e0[4],&SUB_100b913d8);
  (**(code **)(auStack_3e0[3] + 0x38))(uVar11,0,1,lVar5);
  lVar5 = _DAT_112f71a40;
  func_0x000107c61428(unaff_x20 + _DAT_112f71a40,&puStack_3a0,0x21,0);
  func_0x00010348f0bc(uVar11,unaff_x20 + lVar5,0x112f71aa0,&UNK_10dbcd6c0);
  func_0x000107c614a8(&puStack_3a0);
  uVar11 = puVar1[1];
  *puVar1 = uVar12;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar11);
  lVar5 = unaff_x20 + _DAT_112f71a00;
  uVar13 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar13);
  pcVar15 = *(code **)(lVar4 + 8);
  func_0x000107c61434(param_2);
  (*pcVar15)(puVar14,0,uVar13,lVar4);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f71a18);
  puStack_3a0 = (undefined *)0x0;
  func_0x000107c6157c(uVar13);
  func_0x0001002a64a8(&puStack_3a0);
  func_0x000107c61574(uVar13);
  uVar12 = auStack_3e0[6];
  bVar2 = *(byte *)(unaff_x20 + _DAT_112f71a38);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      pcVar7 = "lens_carousel_sponsored_lens";
    }
    else {
      if (bVar2 == 1) {
        auStack_3e0[4] = 0x800000010f153900;
        auStack_3e0[3] = 0xd00000000000001f;
        goto LAB_10348d6ec;
      }
      pcVar7 = "talk_carousel_sponsored_lens";
    }
    auStack_3e0[3] = 0xd00000000000001c;
    auStack_3e0[4] = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
  }
  else if (bVar2 == 3) {
    auStack_3e0[4] = 0x800000010f1538c0;
    auStack_3e0[3] = 0xd000000000000013;
  }
  else if (bVar2 == 4) {
    auStack_3e0[4] = 0x800000010f1538a0;
    auStack_3e0[3] = 0xd000000000000014;
  }
  else {
    auStack_3e0[4] = 0xed00006174635f74;
    auStack_3e0[3] = 0x6e65697069636572;
  }
LAB_10348d6ec:
  pcVar7 = "handleAttachment(lensId:attachment:adConfig:)";
  func_0x0001000c10c0("handleAttachment(lensId:attachment:adConfig:)");
  func_0x000107c61180();
  puVar8 = &UNK_11065b700;
  func_0x000107c613fc(&UNK_11065b700,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  uVar11 = auStack_3e0[2];
  FUN_10348ef50(uVar12,auStack_3e0[2],&SUB_100b91584);
  uVar12 = (ulong)*(byte *)(auStack_3e0[7] + 0x50);
  uVar6 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = auStack_3e0[5] + uVar6 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_11065b728;
  func_0x000107c613fc(&UNK_11065b728,uVar16 + 0x18,uVar12 | 7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  func_0x00010348f29c(uVar11,puVar9 + uVar6,&SUB_100b91584);
  uVar12 = auStack_3e0[0];
  *(ulong *)(puVar9 + uVar16) = auStack_3e0[0];
  *(ulong *)(puVar9 + uVar16 + 8) = auStack_3e0[3];
  *(ulong *)((long)(puVar9 + uVar16 + 8) + 8) = auStack_3e0[4];
  apcStack_390[2] = FUN_10348ef94;
  puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_398 = 0x42000000;
  apcStack_390[0] = (code *)&UNK_1000f6b44;
  apcStack_390[1] = (code *)&UNK_11065b740;
  ppuVar10 = &puStack_3a0;
  apcStack_390[3] = (code *)puVar9;
  func_0x000107c60bc4(ppuVar10);
  pcVar15 = apcStack_390[3];
  func_0x000107c615f0(uVar12);
  func_0x000107c61574(pcVar15);
  func_0x000107c4e590(pcVar7);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c615e8(uVar12);
  func_0x000107c615e8(pcVar7);
  func_0x00010348f260(puVar14,&SUB_100b913d8);
  return;
}



/* Entry: 10348d85c; end: 10348d8bb; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl init] */

void FUN_10348d85c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCTAHandler.SponsoredAttachmentHandlerImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10348d888);
  (*pcVar1)();
}



/* Entry: 10348d8bc; end: 10348d997; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010348d8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010348d908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010348d8dc) */
/* WARNING: Removing unreachable block (ram,0x00010348d90c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348d8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f719f8));
  return;
}



/* Entry: 10348d998; end: 10348d99f;  */

void FUN_10348d998(void)

{
  if (lRam0000000112f71a80 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e769ce4);
  return;
}



/* Entry: 10348d9a0; end: 10348da67;  */

uint FUN_10348d9a0(uint param_1)

{
  FUN_10348cc44();
  return param_1 & 1;
}



/* Entry: 10348da68; end: 10348da7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348da68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f71a18));
  return;
}



/* Entry: 10348da7c; end: 10348dabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10348da7c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113807320;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113807320,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 10348dac0; end: 10348db0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348dac0(undefined1 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113807320;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113807320,auStack_48,1,0);
  *(undefined1 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Entry: 10348db10; end: 10348db53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10348db10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_113807320;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113807320,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = FUN_10348db54;
  return auVar3;
}



/* Entry: 10348db54; end: 10348db57;  */

void FUN_10348db54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10348db58; end: 10348dceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348db58(void)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  
  lVar2 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000100b913d8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar2);
  lVar2 = _DAT_112f71a40;
  func_0x000107c61428(unaff_x20 + _DAT_112f71a40,auStack_58,0x21,0);
  func_0x00010348f0bc(auStack_60 + -extraout_x8,unaff_x20 + lVar2,0x112f71aa0,&UNK_10dbcd6c0);
  func_0x000107c614a8(auStack_58);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f71a18);
  auStack_58[0] = 2;
  func_0x000107c6157c(uVar4);
  func_0x0001002a64a8(auStack_58);
  func_0x000107c61574(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f71a48);
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f71a50);
  if (lVar2 != 0) {
    lVar5 = ((long *)(unaff_x20 + _DAT_112f71a50))[1];
    lVar3 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar6 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar6)(lVar3,lVar5);
    func_0x000107c615e8(lVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f71a08);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 10348dcec; end: 10348dde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348dcec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f71a10);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    func_0x000107c615f0(uVar3);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010418bbf4(param_2,param_3,param_4,param_5,param_1,0,0,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112f71a08));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10348dde8; end: 10348e0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348dde8(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b913d8();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_01;
  lVar2 = param_2 + _DAT_112f71a40;
  func_0x000107c61428(lVar2,auStack_88,0x21,0);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar8 = lVar2;
  (*pcVar9)(lVar2,1,lVar3);
  if ((int)lVar8 == 0) {
    func_0x000107c61174(*(undefined8 *)(param_3 + _DAT_113067470));
    func_0x0001041b86fc(lVar7);
    lVar8 = 0;
    func_0x000100b91584();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar7,0,1,lVar8);
    func_0x00010348f0bc(lVar7,lVar2 + *(int *)(lVar3 + 0x18),0x112d3b130,&UNK_10d904950);
  }
  lVar8 = lVar2;
  (*pcVar9)(lVar2,1,lVar3);
  if ((int)lVar8 == 0) {
    dVar10 = 0.0;
    if (*(long *)(param_4 + _DAT_113067de0) != 0) {
      func_0x000107c4223c();
      dVar10 = param_1;
    }
    dVar11 = 0.0;
    if (*(long *)(param_4 + _DAT_113067dd0) != 0) {
      func_0x000107c4223c();
      dVar11 = param_1;
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar10 = dVar10 - dVar11;
    func_0x000107c4cec4();
    *(double *)(lVar2 + *(int *)(lVar3 + 0x1c)) = dVar10;
  }
  func_0x000107c614a8(auStack_88);
  func_0x00010348f074(lVar2,puVar5,0x112f71aa0,&UNK_10dbcd6c0);
  puVar4 = puVar5;
  (*pcVar9)(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_10348f220(puVar5,0x112f71aa0,&UNK_10dbcd6c0);
  }
  else {
    func_0x00010348f29c(puVar5,lVar6,&SUB_100b913d8);
    param_2 = param_2 + _DAT_112f71a00;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar1);
    (**(code **)(lVar2 + 0x10))(lVar6,uVar1,lVar2);
    func_0x00010348f260(lVar6,&SUB_100b913d8);
  }
  FUN_10348db58();
  return;
}



/* Entry: 10348e0a8; end: 10348e5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348e0a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000100b91acc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112dd42b0;
  lStack_f0 = lVar6;
  func_0x0001000285a8(0x112dd42b0,&UNK_10d996f10);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar2 = 0x112d3b128;
  lStack_d0 = lVar6;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar7 - extraout_x12;
  lStack_c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lStack_c0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_01;
  lVar2 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = unaff_x20 + _DAT_112f71a28;
  FUN_10348f024(lStack_e8,auStack_88);
  puVar3 = auStack_88;
  func_0x0001000a8868(puVar3,uStack_70);
  puStack_e0 = puVar3;
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113067470));
  func_0x0001041b86fc(lVar9);
  lVar2 = unaff_x20 + _DAT_112f71a40;
  func_0x000107c61428(lVar2,auStack_a0,0,0);
  lVar4 = 0;
  func_0x000100b913d8();
  pcVar12 = *(code **)(*(long *)(lVar4 + -8) + 0x30);
  lVar6 = lVar2;
  (*pcVar12)(lVar2,1,lVar4);
  if ((int)lVar6 == 0) {
    FUN_10348f074(lVar2 + *(int *)(lVar4 + 0x2c),lVar8,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    (**(code **)(lVar11 + 0x38))(lVar8,1,1,lVar1);
  }
  (**(code **)(lStack_68 + 0x20))(1,lVar9,lVar8,uStack_70,lStack_68);
  FUN_10348f220(lVar8,0x112d3b128,&UNK_10d996bb0);
  func_0x00010348f260(lVar9,&SUB_100b91584);
  func_0x0001000834e4(auStack_88);
  lVar8 = lVar2;
  (*pcVar12)(lVar2,1,lVar4);
  lVar6 = lStack_c0;
  if ((int)lVar8 == 0) {
    FUN_10348f074(lVar2 + *(int *)(lVar4 + 0x2c),lStack_c0,0x112d3b128,&UNK_10d996bb0);
    pcVar12 = *(code **)(lVar11 + 0x38);
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x38);
    (*pcVar12)(lStack_c0,1,1,lVar1);
  }
  uVar7 = uStack_b8;
  lVar8 = lStack_c8;
  lVar4 = lStack_d0;
  (*pcVar12)(lStack_c8,1,1,lVar1);
  lVar2 = (long)*(int *)(lStack_d8 + 0x30);
  FUN_10348f074(lVar6,lVar4,0x112d3b128,&UNK_10d996bb0);
  FUN_10348f074(lVar8,lVar4 + lVar2,0x112d3b128,&UNK_10d996bb0);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar9 = lVar4;
  (*pcVar12)(lVar4,1,lVar1);
  if ((int)lVar9 == 1) {
    FUN_10348f220(lVar8,0x112d3b128,&UNK_10d996bb0);
    FUN_10348f220(lVar6,0x112d3b128,&UNK_10d996bb0);
    lVar2 = lVar4 + lVar2;
    (*pcVar12)(lVar2,1,lVar1);
    if ((int)lVar2 == 1) {
      FUN_10348f220(lVar4,0x112d3b128,&UNK_10d996bb0);
      goto LAB_10348e518;
    }
LAB_10348e4dc:
    FUN_10348f220(lVar4,0x112dd42b0,&UNK_10d996f10);
  }
  else {
    FUN_10348f074(lVar4,uVar7,0x112d3b128,&UNK_10d996bb0);
    lVar9 = lVar4 + lVar2;
    (*pcVar12)(lVar9,1,lVar1);
    lVar1 = lStack_f0;
    if ((int)lVar9 == 1) {
      FUN_10348f220(lVar8,0x112d3b128,&UNK_10d996bb0);
      FUN_10348f220(lVar6,0x112d3b128,&UNK_10d996bb0);
      func_0x00010348f260(uVar7,&SUB_100b91acc);
      goto LAB_10348e4dc;
    }
    func_0x00010348f29c(lVar4 + lVar2,lStack_f0,&SUB_100b91acc);
    uVar5 = uVar7;
    func_0x00010419fb70(uVar7,lVar1);
    func_0x00010348f260(lVar1,&SUB_100b91acc);
    FUN_10348f220(lVar8,0x112d3b128,&UNK_10d996bb0);
    FUN_10348f220(lVar6,0x112d3b128,&UNK_10d996bb0);
    func_0x00010348f260(uVar7,&SUB_100b91acc);
    FUN_10348f220(lVar4,0x112d3b128,&UNK_10d996bb0);
    if ((uVar5 & 1) != 0) goto LAB_10348e518;
  }
  uVar10 = *(undefined8 *)(lStack_e8 + 0x18);
  lVar2 = *(long *)(lStack_e8 + 0x20);
  func_0x0001000a8868(lStack_e8,uVar10);
  (**(code **)(lVar2 + 0x30))(uVar10,lVar2);
LAB_10348e518:
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f71a18);
  auStack_88[0] = 1;
  func_0x000107c6157c(uVar10);
  func_0x0001002a64a8(auStack_88);
  func_0x000107c61574(uVar10);
  return;
}



/* Entry: 10348e5f4; end: 10348e643; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerDidPresent:] */

/* WARNING: Possible PIC construction at 0x00010348e62c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010348e630) */

void FUN_10348e5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10348e0a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10348e644; end: 10348e6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348e644(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f71a08;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f71a08);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 10348e6dc; end: 10348e727; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerViewWillFullyAppear:] */

/* WARNING: Possible PIC construction at 0x00010348e710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010348e714) */

void FUN_10348e6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10348f104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10348e728; end: 10348e84b; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerViewDidFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348e728(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar1 = param_1 + _DAT_112f71a40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  lVar2 = 0;
  func_0x000100b913d8();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  func_0x000107c61174(param_1);
  if ((int)lVar3 == 0) {
    func_0x000107c5eea0(puVar4);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
    func_0x00010348f0bc(puVar4,lVar1 + *(int *)(lVar2 + 0x24),0x112d373d8,&UNK_10d9014c0);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10348e84c; end: 10348e96f; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerViewWillFullyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348e84c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar1 = param_1 + _DAT_112f71a40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  lVar2 = 0;
  func_0x000100b913d8();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  func_0x000107c61174(param_1);
  if ((int)lVar3 == 0) {
    func_0x000107c5eea0(puVar4);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
    func_0x00010348f0bc(puVar4,lVar1 + *(int *)(lVar2 + 0x28),0x112d373d8,&UNK_10d9014c0);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10348e970; end: 10348e973; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_10348e970(void)

{
  return;
}



/* Entry: 10348e974; end: 10348eba7;  */

void FUN_10348e974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_11065b778;
  func_0x000107c613fc(&UNK_11065b778,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_11065b7a0;
  func_0x000107c613fc(&UNK_11065b7a0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10348f004;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10348f00c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102456760;
  puStack_88 = &UNK_11065b7b8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11065b7f0;
  func_0x000107c613fc(&UNK_11065b7f0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  puVar7 = &UNK_11065b818;
  func_0x000107c613fc(&UNK_11065b818,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10348f014;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10348f01c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11065b830;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5e,0xfb,0x1d,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10348eba4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5e,0xfd,0x14,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10348eba8);
  (*pcVar2)();
}



/* Entry: 10348eba8; end: 10348ecaf;  */

void FUN_10348eba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_70;
    func_0x000107c61174();
    pcVar1 = "handleAttachmentHandlerCompleted(with:scope:)";
    func_0x0001000c10c0("handleAttachmentHandlerCompleted(with:scope:)");
    func_0x000107c61180();
    puVar2 = &UNK_11065b868;
    func_0x000107c613fc(&UNK_11065b868,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = param_1;
    pcStack_50 = FUN_10348f068;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11065b880;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10348ecb0; end: 10348ee87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348ecb0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10348f024(param_2 + _DAT_112f71a28,auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  func_0x000107c61174(*(undefined8 *)(param_3 + _DAT_113067470));
  func_0x0001041b86fc(lVar4);
  param_2 = param_2 + _DAT_112f71a40;
  func_0x000107c61428(param_2,auStack_90,0,0);
  lVar2 = 0;
  func_0x000100b913d8();
  lVar1 = param_2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_2,1,lVar2);
  if ((int)lVar1 == 0) {
    FUN_10348f074(param_2 + *(int *)(lVar2 + 0x2c),puVar3,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    lVar1 = 0;
    func_0x000100b91acc();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,1,1,lVar1);
  }
  (**(code **)(lStack_58 + 0x20))(0,lVar4,puVar3,uStack_60,lStack_58);
  FUN_10348f220(puVar3,0x112d3b128,&UNK_10d996bb0);
  func_0x00010348f260(lVar4,&SUB_100b91584);
  func_0x0001000834e4(auStack_78);
  FUN_10348db58();
  return;
}



/* Entry: 10348ee88; end: 10348eef3; -[_TtC23SponsoredLensCTAHandler30SponsoredAttachmentHandlerImpl adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x00010348eed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010348eed8) */

void FUN_10348ee88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10348e974(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10348eef4; end: 10348ef47;  */

void FUN_10348eef4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1037c76fc();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  pcVar3 = *(code **)(unaff_x20 + *(int *)(lVar1 + 0x24) +
                     (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  return;
}



/* Entry: 10348ef48; end: 10348ef4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348ef48(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_6d8 [776];
  undefined1 auStack_3d0 [776];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71a40;
    func_0x000107c61428(lVar1,auStack_80,0x21,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      func_0x000107c61174(param_1);
      func_0x0001042c3e04(auStack_6d8);
      func_0x00010178e4b0(auStack_6d8);
      iVar2 = *(int *)(lVar4 + 0x3c);
      func_0x000107c610b4(auStack_3d0,lVar1 + iVar2,0x301);
      func_0x000107c610b4(lVar1 + iVar2,auStack_6d8,0x301);
      func_0x000107c614a8(auStack_80);
      FUN_10348f220(auStack_3d0,0x112dcbc48,&UNK_10d98e2c0);
    }
    else {
      func_0x000107c614a8(auStack_80);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_3d0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71a40;
    func_0x000107c61428(lVar1,auStack_6d8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x30)) = *(undefined8 *)(param_1 + _DAT_11306ba00);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71a40;
    func_0x000107c61428(lVar1,auStack_98,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar1 + *(int *)(lVar4 + 0x34)) = *(undefined1 *)(param_1 + _DAT_11306b9f8);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71a40;
    func_0x000107c61428(lVar1,auStack_c8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar1 + *(int *)(lVar4 + 0x38)) = *(undefined1 *)(param_1 + _DAT_11306b9f0);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10348ef50; end: 10348ef93;  */

undefined8 FUN_10348ef50(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}


