/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10341095c; end: 1034109af;  */

void FUN_10341095c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034109b0; end: 1034109f7; -[SCGamesLensActivationEntryPoint playGamesLensScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034109b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66720;
  func_0x000107c61428(param_1 + _DAT_112f66720,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1034109f8; end: 103410a5b; -[SCGamesLensActivationEntryPoint setPlayGamesLensScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034109f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66720;
  func_0x000107c61428(param_1 + _DAT_112f66720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103410a5c; end: 103411113;  */

/* WARNING: Possible PIC construction at 0x000103410cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034110a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034110b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034110c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034110d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034110e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103410dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103410df8) */
/* WARNING: Removing unreachable block (ram,0x000103410de8) */
/* WARNING: Removing unreachable block (ram,0x000103410e18) */
/* WARNING: Removing unreachable block (ram,0x000103410e08) */
/* WARNING: Removing unreachable block (ram,0x000103410e48) */
/* WARNING: Removing unreachable block (ram,0x000103410e38) */
/* WARNING: Removing unreachable block (ram,0x000103410e88) */
/* WARNING: Removing unreachable block (ram,0x000103410e78) */
/* WARNING: Removing unreachable block (ram,0x000103410e68) */
/* WARNING: Removing unreachable block (ram,0x000103410ec8) */
/* WARNING: Removing unreachable block (ram,0x000103410eb8) */
/* WARNING: Removing unreachable block (ram,0x000103410ea8) */
/* WARNING: Removing unreachable block (ram,0x000103410e98) */
/* WARNING: Removing unreachable block (ram,0x000103410f08) */
/* WARNING: Removing unreachable block (ram,0x000103410ef8) */
/* WARNING: Removing unreachable block (ram,0x000103410ee8) */
/* WARNING: Removing unreachable block (ram,0x000103410ed8) */
/* WARNING: Removing unreachable block (ram,0x000103410f58) */
/* WARNING: Removing unreachable block (ram,0x000103410f48) */
/* WARNING: Removing unreachable block (ram,0x000103410f38) */
/* WARNING: Removing unreachable block (ram,0x000103410f28) */
/* WARNING: Removing unreachable block (ram,0x000103410fb8) */
/* WARNING: Removing unreachable block (ram,0x000103410fa8) */
/* WARNING: Removing unreachable block (ram,0x000103410f98) */
/* WARNING: Removing unreachable block (ram,0x000103410f88) */
/* WARNING: Removing unreachable block (ram,0x000103410f78) */
/* WARNING: Removing unreachable block (ram,0x000103411018) */
/* WARNING: Removing unreachable block (ram,0x000103411008) */
/* WARNING: Removing unreachable block (ram,0x000103410ff8) */
/* WARNING: Removing unreachable block (ram,0x000103410fe8) */
/* WARNING: Removing unreachable block (ram,0x000103410fd8) */
/* WARNING: Removing unreachable block (ram,0x000103410fc8) */
/* WARNING: Removing unreachable block (ram,0x000103411078) */
/* WARNING: Removing unreachable block (ram,0x000103411068) */
/* WARNING: Removing unreachable block (ram,0x000103411058) */
/* WARNING: Removing unreachable block (ram,0x000103411048) */
/* WARNING: Removing unreachable block (ram,0x000103411038) */
/* WARNING: Removing unreachable block (ram,0x000103411028) */
/* WARNING: Removing unreachable block (ram,0x0001034110e8) */
/* WARNING: Removing unreachable block (ram,0x0001034110d8) */
/* WARNING: Removing unreachable block (ram,0x0001034110c8) */
/* WARNING: Removing unreachable block (ram,0x0001034110b8) */
/* WARNING: Removing unreachable block (ram,0x0001034110a8) */
/* WARNING: Removing unreachable block (ram,0x000103411098) */
/* WARNING: Removing unreachable block (ram,0x000103410d60) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103410d50) */
/* WARNING: Removing unreachable block (ram,0x000103410d40) */
/* WARNING: Removing unreachable block (ram,0x000103410d30) */
/* WARNING: Removing unreachable block (ram,0x000103410d20) */
/* WARNING: Removing unreachable block (ram,0x000103410d10) */
/* WARNING: Removing unreachable block (ram,0x000103410d00) */
/* WARNING: Removing unreachable block (ram,0x000103410cf0) */
/* WARNING: Removing unreachable block (ram,0x000103410dd8) */

void FUN_103410a5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c43d10();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar14 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    if (lVar14 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c40080();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar14;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4b2a8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar14;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c4b2f4();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c4b364();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar6 = unaff_x20;
              func_0x000107c4ab24();
              func_0x000107c61180();
              if (lVar6 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar14;
              }
              else {
                lVar7 = unaff_x20;
                func_0x000107c4e874();
                func_0x000107c61180();
                if (lVar7 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar14;
                }
                else {
                  lVar8 = unaff_x20;
                  func_0x000107c4e87c();
                  func_0x000107c61180();
                  if (lVar8 != 0) {
                    lVar9 = unaff_x20;
                    func_0x000107c4b090();
                    func_0x000107c61180();
                    if (lVar9 != 0) {
                      lVar10 = unaff_x20;
                      func_0x000107c4b078();
                      func_0x000107c61180();
                      if (lVar10 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar14;
                      }
                      else {
                        lVar11 = unaff_x20;
                        func_0x000107c4b030();
                        func_0x000107c61180();
                        if (lVar11 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar14;
                        }
                        else {
                          lVar12 = unaff_x20;
                          func_0x000107c4e870();
                          func_0x000107c61180();
                          if (lVar12 != 0) {
                            lVar13 = unaff_x20;
                            func_0x000107c5e1f8();
                            func_0x000107c61180();
                            if (lVar13 != 0) {
                              func_0x000107c4e888();
                              func_0x000107c61180();
                              if (unaff_x20 == 0) {
                                func_0x000107c61170(lVar1);
                                lVar1 = lVar14;
                              }
                              else {
                                lVar14 = 0;
                                FUN_1033fc6a0();
                                func_0x000107c613fc();
                                *(undefined8 *)(lVar14 + 0x88) = 0;
                                *(undefined8 *)(lVar14 + 0x80) = 0;
                                *(undefined8 *)(lVar14 + 0x98) = 0;
                                *(undefined8 *)(lVar14 + 0x90) = 0;
                                *(undefined8 *)(lVar14 + 0xa0) = 0;
                                *(long *)(lVar14 + 0x20) = lVar4;
                                *(long *)(lVar14 + 0x28) = lVar5;
                                *(long *)(lVar14 + 0x10) = lVar1;
                                *(long *)(lVar14 + 0x18) = lVar3;
                                *(long *)(lVar14 + 0x30) = lVar2;
                                *(long *)(lVar14 + 0x38) = lVar7;
                                *(long *)(lVar14 + 0x40) = lVar8;
                                *(long *)(lVar14 + 0x48) = lVar6;
                                *(long *)(lVar14 + 0x50) = lVar9;
                                *(long *)(lVar14 + 0x58) = lVar10;
                                *(long *)(lVar14 + 0x60) = lVar11;
                                *(long *)(lVar14 + 0x68) = lVar12;
                                *(long *)(lVar14 + 0x70) = lVar13;
                                *(long *)(lVar14 + 0x78) = unaff_x20;
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174(lVar8);
                                func_0x000107c61174(lVar9);
                                func_0x000107c61174(lVar10);
                                func_0x000107c61174(lVar11);
                                func_0x000107c61174(lVar12);
                                func_0x000107c61174(lVar13);
                                func_0x000107c61174(unaff_x20);
                                func_0x0001033fba20();
                                lVar1 = unaff_x20;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103411114; end: 10341113b; -[SCGamesLensActivationEntryPoint begin] */

void FUN_103411114(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103410a5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10341113c; end: 1034111ef; -[SCGamesLensActivationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341113c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f66728);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_1033fc0bc();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_1034111d0;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_1034111d0:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1034111f0; end: 1034118e3;  */

void FUN_1034111f0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = 0x6f635373656d6167;
  if ((param_2 == 0x6f635373656d6167 && param_3 == -0x15ffffffffff9a90) ||
     (func_0x000107c605b8(0x6f635373656d6167,0xea00000000006570,param_2,param_3,0), (uVar3 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54db8();
  }
  else {
    uVar3 = 0x63536d6574737973;
    if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
       (uVar3 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59b6c();
    }
    else {
      uVar3 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ef650)) ||
         (uVar5 = uVar3,
         func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0),
         (uVar5 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53720();
      }
      else {
        uVar5 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10c5720)) ||
           (uVar4 = uVar5,
           func_0x000107c605b8(0xd000000000000017,0x800000010ef3a8e0,param_2,param_3,0),
           (uVar4 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55dd0();
        }
        else {
          uVar4 = 0xd000000000000015;
          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
             (uVar2 = uVar4,
             func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55df4();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10dc330)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef23cd0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e20();
            }
            else if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef0f790c0)) ||
                    (func_0x000107c605b8(0xd000000000000012,0x800000010f086f40,param_2,param_3,0),
                    (uVar3 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55aec();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0eb4780)) {
                uVar3 = 0;
                func_0x000107c605b8(0xd00000000000001a,0x800000010f14b880,param_2,param_3,0);
                if ((uVar3 & 1) == 0) {
                  uVar3 = 0;
                  if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10da440)) ||
                     (func_0x000107c605b8(0xd000000000000018,0x800000010ef25bc0,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55d00();
                  }
                  else {
                    uVar3 = 0;
                    if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0ed8b90)) ||
                       (func_0x000107c605b8(0xd00000000000001c,0x800000010f127470,param_2,param_3,0)
                       , (uVar3 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55cf4();
                    }
                    else if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10395e0))
                            || (func_0x000107c605b8(0xd000000000000017,0x800000010efc6a20,param_2,
                                                    param_3,0), (uVar5 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55ce0();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0eb62a0)) {
                        uVar3 = 0;
                        func_0x000107c605b8(0xd00000000000001a,0x800000010f149d60,param_2,param_3,0)
                        ;
                        if ((uVar3 & 1) == 0) {
                          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0eb4760))
                             || (func_0x000107c605b8(0xd000000000000015,0x800000010f14b8a0,param_2,
                                                     param_3,0), (uVar4 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5a6a8();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10d0c60)
                               ) {
                              uVar3 = 0;
                              func_0x000107c605b8(0xd00000000000001a,0x800000010ef2f3a0,param_2,
                                                  param_3,0);
                              if ((uVar3 & 1) == 0) {
                                uVar3 = 0xd000000000000019;
                                if (((param_2 != -0x2fffffffffffffe7) ||
                                    (param_3 != -0x7ffffffef0eb4740)) &&
                                   (func_0x000107c605b8(0xd000000000000019,0x800000010f14b8c0,
                                                        param_2,param_3,0), (uVar3 & 1) == 0)) {
                                  func_0x000107c602fc(0x15);
                                  func_0x000107c6142c(0xe000000000000000);
                                  func_0x000107c5fb78(param_2,param_3);
                                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                      0x800000010ef0fc20,
                                                                                                            
                                                  "GamesLensProcessing/SCGamesLensActivationEntryPoint.swift"
                                                  ,0x39,2,0x6a,0);
                    /* WARNING: Does not return */
                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034118e4);
                                  (*pcVar1)();
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c57464();
                                goto LAB_103411288;
                              }
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c57478();
                          }
                          goto LAB_103411288;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c57460();
                    }
                  }
                  goto LAB_103411288;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5746c();
            }
          }
        }
      }
    }
  }
LAB_103411288:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034118e4; end: 10341198f; -[SCGamesLensActivationEntryPoint setValue:forIvarName:] */

void FUN_1034118e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1034111f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103411990; end: 103411aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411990(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f666b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f666f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f66700,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f66708,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f66710,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f66718,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f66720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f66728) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103411b00; end: 103411b1f; -[SCGamesLensActivationEntryPoint init] */

void FUN_103411b00(void)

{
  FUN_103411990();
  return;
}



/* Entry: 103411b20; end: 103411b53;  */

void FUN_103411b20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103411b54; end: 103411c6b; -[SCGamesLensActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411b54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f666b0);
  func_0x000107c61610(param_1 + _DAT_112f666b8);
  func_0x000107c61610(param_1 + _DAT_112f666c0);
  func_0x000107c61610(param_1 + _DAT_112f666c8);
  func_0x000107c61610(param_1 + _DAT_112f666d0);
  func_0x000107c61610(param_1 + _DAT_112f666d8);
  func_0x000107c61610(param_1 + _DAT_112f666e0);
  func_0x000107c61610(param_1 + _DAT_112f666e8);
  func_0x000107c61610(param_1 + _DAT_112f666f0);
  func_0x000107c61610(param_1 + _DAT_112f666f8);
  func_0x000107c61610(param_1 + _DAT_112f66700);
  func_0x000107c61610(param_1 + _DAT_112f66708);
  func_0x000107c61610(param_1 + _DAT_112f66710);
  func_0x000107c61610(param_1 + _DAT_112f66718);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f66720));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f66728));
  return;
}



/* Entry: 103411c6c; end: 103411c8b;  */

void FUN_103411c6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8bb0);
  return;
}



/* Entry: 103411c8c; end: 103411c97; -[SCGamesLensHintEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411c8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66758;
  func_0x000107c61428(param_1 + _DAT_112f66758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103411c98; end: 103411ca3; -[SCGamesLensHintEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66758;
  func_0x000107c61428(param_1 + _DAT_112f66758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103411ca4; end: 103411caf; -[SCGamesLensHintEntryPoint playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411ca4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66760;
  func_0x000107c61428(param_1 + _DAT_112f66760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103411cb0; end: 103411cbb; -[SCGamesLensHintEntryPoint setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66760;
  func_0x000107c61428(param_1 + _DAT_112f66760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103411cbc; end: 103411cc7; -[SCGamesLensHintEntryPoint lensHintProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411cbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66768;
  func_0x000107c61428(param_1 + _DAT_112f66768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103411cc8; end: 103411cd3; -[SCGamesLensHintEntryPoint setLensHintProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66768;
  func_0x000107c61428(param_1 + _DAT_112f66768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103411cd4; end: 103411cdf; -[SCGamesLensHintEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f66770;
  func_0x000107c61428(param_1 + _DAT_112f66770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103411ce0; end: 103411d23;  */

void FUN_103411ce0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103411d24; end: 103411d2f; -[SCGamesLensHintEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f66770;
  func_0x000107c61428(param_1 + _DAT_112f66770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103411d30; end: 103411d83;  */

void FUN_103411d30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103411d84; end: 103411eef;  */

/* WARNING: Possible PIC construction at 0x000103411e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103411eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103411ecc) */
/* WARNING: Removing unreachable block (ram,0x000103411e64) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103411e54) */
/* WARNING: Removing unreachable block (ram,0x000103411ebc) */

void FUN_103411d84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b1b4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4b364();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar3 = 0;
        FUN_1033fca0c();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        *(long *)(lVar3 + 0x20) = unaff_x20;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        FUN_1033fc74c();
        lVar3 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103411ef0; end: 103411f17; -[SCGamesLensHintEntryPoint begin] */

void FUN_103411ef0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103411d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103411f18; end: 103412247; -[SCGamesLensHintEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103411f18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f66778);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_1033fc8f4();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_103411fac;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_103411fac:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103412248; end: 1034122f3; -[SCGamesLensHintEntryPoint setValue:forIvarName:] */

void FUN_103412248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000103411fcc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034122f4; end: 10341238f; -[SCGamesLensHintEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034122f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f66758,0);
  func_0x000107c61614(param_1 + _DAT_112f66760,0);
  func_0x000107c61614(param_1 + _DAT_112f66768,0);
  func_0x000107c61614(param_1 + _DAT_112f66770,0);
  *(undefined8 *)(param_1 + _DAT_112f66778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103412390; end: 1034123c3;  */

void FUN_103412390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034123c4; end: 10341242b; -[SCGamesLensHintEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034123c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f66758);
  func_0x000107c61610(param_1 + _DAT_112f66760);
  func_0x000107c61610(param_1 + _DAT_112f66768);
  func_0x000107c61610(param_1 + _DAT_112f66770);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f66778));
  return;
}



/* Entry: 10341242c; end: 10341244b;  */

void FUN_10341242c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8ce0);
  return;
}



/* Entry: 10341244c; end: 103412457; -[SCPlayGamesCapturingServiceProvider playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341244c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f667a8;
  func_0x000107c61428(param_1 + _DAT_112f667a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103412458; end: 103412463; -[SCPlayGamesCapturingServiceProvider setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f667a8;
  func_0x000107c61428(param_1 + _DAT_112f667a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103412464; end: 10341246f; -[SCPlayGamesCapturingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f667b0;
  func_0x000107c61428(param_1 + _DAT_112f667b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103412470; end: 10341247b; -[SCPlayGamesCapturingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f667b0;
  func_0x000107c61428(param_1 + _DAT_112f667b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10341247c; end: 103412487; -[SCPlayGamesCapturingServiceProvider playGamesSendingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341247c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f667b8;
  func_0x000107c61428(param_1 + _DAT_112f667b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103412488; end: 103412493; -[SCPlayGamesCapturingServiceProvider setPlayGamesSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412488(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f667b8;
  func_0x000107c61428(param_1 + _DAT_112f667b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103412494; end: 10341249f; -[SCPlayGamesCapturingServiceProvider viewfinderDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412494(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f667c0;
  func_0x000107c61428(param_1 + _DAT_112f667c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034124a0; end: 1034124ab; -[SCPlayGamesCapturingServiceProvider setViewfinderDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034124a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f667c0;
  func_0x000107c61428(param_1 + _DAT_112f667c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034124ac; end: 1034124b7; -[SCPlayGamesCapturingServiceProvider playGamesPresenterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034124ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f667c8;
  func_0x000107c61428(param_1 + _DAT_112f667c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034124b8; end: 1034124fb;  */

void FUN_1034124b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034124fc; end: 103412507; -[SCPlayGamesCapturingServiceProvider setPlayGamesPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034124fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f667c8;
  func_0x000107c61428(param_1 + _DAT_112f667c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103412508; end: 10341255b;  */

void FUN_103412508(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10341255c; end: 10341270b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341255c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40080();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4e8a0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5df64();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4e888();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = 0;
            FUN_1033fee2c();
            func_0x000107c613fc();
            *(long *)(lVar6 + 0x10) = lVar1;
            *(long *)(lVar6 + 0x18) = lVar3;
            *(long *)(lVar6 + 0x20) = lVar4;
            *(long *)(lVar6 + 0x28) = lVar5;
            uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f667d0);
            *(long *)(unaff_x20 + _DAT_112f667d0) = lVar6;
            func_0x000107c61174(lVar1);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar5);
            func_0x000107c6157c(lVar6);
            func_0x000107c61574(uVar7);
            FUN_1033fe3b8();
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c61574(lVar6);
            return;
          }
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar1 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10341270c; end: 103412797; -[SCPlayGamesCapturingServiceProvider provide] */

void FUN_10341270c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10341255c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "GamesLensProcessing/SCPlayGamesCapturingServiceProvider.swift",0x3d,2,0x23,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103412798);
  (*pcVar1)();
}



/* Entry: 103412798; end: 1034127cb; -[SCPlayGamesCapturingServiceProvider __safeProvide] */

void FUN_103412798(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10341255c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034127cc; end: 10341280f; -[SCPlayGamesCapturingServiceProvider end] */

void FUN_1034127cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103412810; end: 103412af3;  */

void FUN_103412810(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x656d614779616c70 && param_3 == -0x11ff9a8f909cac8d) ||
     (func_0x000107c605b8(0x656d614779616c70,0xee0065706f635373,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5747c();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0eb4660)) ||
           (func_0x000107c605b8(0xd000000000000018,0x800000010f14b9a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57490();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0eb4640)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010f14b9c0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a5a4();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10d0c60)) &&
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef2f3a0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "GamesLensProcessing/SCPlayGamesCapturingServiceProvider.swift",
                                  0x3d,2,0x3e,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103412af4);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57478();
          }
        }
        goto LAB_1034128a4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
LAB_1034128a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103412af4; end: 103412b9f; -[SCPlayGamesCapturingServiceProvider setValue:forIvarName:] */

void FUN_103412af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103412810(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103412ba0; end: 103412c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412ba0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f667a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f667b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f667b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f667c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f667c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f667d0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103412c50; end: 103412c6f; -[SCPlayGamesCapturingServiceProvider init] */

void FUN_103412c50(void)

{
  FUN_103412ba0();
  return;
}



/* Entry: 103412c70; end: 103412ca3;  */

void FUN_103412c70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103412ca4; end: 103412d1b; -[SCPlayGamesCapturingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103412ca4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f667a8);
  func_0x000107c61610(param_1 + _DAT_112f667b0);
  func_0x000107c61610(param_1 + _DAT_112f667b8);
  func_0x000107c61610(param_1 + _DAT_112f667c0);
  func_0x000107c61610(param_1 + _DAT_112f667c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f667d0));
  return;
}



/* Entry: 103412d1c; end: 103412d3b;  */

void FUN_103412d1c(void)

{
  func_0x000107c61168(&PTR_PTR_112f66818);
  return;
}



/* Entry: 103412d3c; end: 103412d8b;  */

void FUN_103412d3c(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103412d8c; end: 103412dd3;  */

void FUN_103412d8c(void)

{
  return;
}



/* Entry: 103412dd4; end: 103412e37;  */

void FUN_103412dd4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_103412e38();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  FUN_103412e58(param_2,lVar2 + 0x10);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110652078;
  *param_1 = lVar2;
  return;
}



/* Entry: 103412e38; end: 103412e57;  */

void FUN_103412e38(void)

{
  func_0x000107c61168(&PTR_PTR_112f668d8);
  return;
}



/* Entry: 103412e58; end: 103412e9b;  */

long FUN_103412e58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103412e9c; end: 103412ebb;  */

undefined1  [16] FUN_103412e9c(void)

{
  return ZEXT816(0x110652048);
}



/* Entry: 103412ebc; end: 103413023;  */

long FUN_103412ebc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    func_0x000103412f18();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 103413024; end: 1034132fb;  */

/* WARNING: Possible PIC construction at 0x000103413150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034131c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103413230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103413290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034132d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103413294) */
/* WARNING: Removing unreachable block (ram,0x000103413234) */
/* WARNING: Removing unreachable block (ram,0x0001034131cc) */
/* WARNING: Removing unreachable block (ram,0x000103413154) */
/* WARNING: Removing unreachable block (ram,0x0001034132d8) */

void FUN_103413024(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  FUN_103413eb0(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  func_0x000107c3d89c();
  func_0x000107c5a050(param_1);
  func_0x000107c61168();
  lVar2 = 0x112d360b8;
  FUN_103413ddc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  func_0x000107c4acb0(uVar1);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  FUN_103413eb0(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  func_0x000107c40284(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034132fc; end: 10341333b;  */

void FUN_1034132fc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c4ff34();
  }
  FUN_103413f14(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341333c; end: 103413ca3;  */

void FUN_10341333c(ulong param_1,long param_2,undefined8 param_3,char param_4,double param_5,
                  char param_6,code *param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined *puVar18;
  double dStack_d0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar1 = 0;
  lVar12 = param_2;
  dStack_d0 = param_5;
  func_0x000107c5eec8();
  lVar13 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&dStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_103412ebc();
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  *(ulong *)(unaff_x20 + 0x38) = uVar2;
  *(undefined ***)(unaff_x20 + 0x40) = &PTR_DAT_110651ef8;
  func_0x000107c61174();
  func_0x000107c61170(uVar14);
  uVar3 = uVar2;
  func_0x000107c5c82c();
  func_0x000107c61180();
  puVar18 = (undefined *)0x0;
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if ((param_1 == uVar4) && (param_2 == lVar12)) {
      func_0x000107c6142c(lVar12);
    }
    else {
      uVar3 = param_1;
      func_0x000107c605b8(param_1,param_2,uVar4,lVar12,0);
      func_0x000107c6142c(lVar12);
      if ((uVar3 & 1) == 0) goto LAB_10341346c;
    }
    uVar3 = uVar2;
    func_0x000107c49eac();
    puVar18 = (undefined *)0x0;
    if ((int)uVar3 == 0) {
      puVar18 = (undefined *)0x3ff0000000000000;
    }
  }
LAB_10341346c:
  uVar15 = 0x7974696361706f;
  func_0x000107c550d8(uVar2);
  func_0x000107c61434(param_2);
  lVar12 = param_2;
  func_0x000107c5fadc(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c4fe68();
  func_0x000107c61170();
  func_0x000107c5eec4(lVar11);
  func_0x000107c5eeac();
  (**(code **)(lVar13 + 8))(lVar11,uVar1);
  uVar14 = 0;
  if (param_4 != '\x01') {
    uVar14 = param_3;
  }
  puVar5 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x000107c61168();
  func_0x000107c3e740();
  uVar6 = uVar15;
  func_0x000107c5fadc(0x7974696361706f,0xe700000000000000);
  puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c3dd18();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puStack_88 = PTR___sSdN_11034dd90;
  ppuVar9 = &puStack_a0;
  puStack_a0 = puVar18;
  FUN_103413eb0(ppuVar9,PTR___sSdN_11034dd90);
  func_0x000107c605b0();
  FUN_103413f14(&puStack_a0);
  func_0x000107c54ce4(puVar8);
  func_0x000107c615e8(ppuVar9);
  func_0x000107c5fdd0(0x3ff0000000000000);
  func_0x000107c59e64(puVar8);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61174();
  func_0x000107c54358(uVar14);
  func_0x000107c57ce4(puVar8);
  func_0x000107c549b8(puVar8);
  dVar17 = dStack_d0;
  if (param_6 == '\x01') {
    func_0x000107c61170(puVar8);
    uVar1 = uVar2;
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    func_0x000107c5fadc(uVar3,lVar12);
    func_0x000107c6142c(lVar12);
    func_0x000107c3d5a4(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c3fe58(puVar5);
    if (param_7 != (code *)0x0) {
      (*param_7)();
    }
  }
  else {
    func_0x000107c5fadc(0x7974696361706f,0xe700000000000000);
    func_0x000107c3dd18();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c5fdd0(0x3ff0000000000000);
    func_0x000107c54ce4(puVar7);
    func_0x000107c61170(uVar15);
    func_0x000107c5fdd0(0);
    func_0x000107c59e64(puVar7);
    func_0x000107c61170(uVar15);
    func_0x000107c61174();
    func_0x000107c54358(uVar14);
    func_0x000107c57ce4(puVar7);
    func_0x000107c549b8(puVar7);
    dVar16 = 0.0;
    func_0x000107c52c3c(0,puVar8);
    func_0x000107c42378(puVar8);
    func_0x000107c52c3c(dVar16 + dVar17,puVar7);
    puVar10 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    func_0x000107c610f8(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
    func_0x000107c453e4();
    lVar13 = 0x112f626d0;
    FUN_103413ddc(0x112f626d0,&PTR__OBJC_CLASS___CAAnimation_1126c78d8,0x112f626c8,&UNK_10dbbecb0);
    func_0x000107c613fc();
    dVar16 = 9.88131291682493e-324;
    *(undefined8 *)(lVar13 + 0x18) = 5;
    *(undefined8 *)(lVar13 + 0x10) = 2;
    *(undefined **)(lVar13 + 0x20) = puVar8;
    *(undefined **)(lVar13 + 0x28) = puVar7;
    uVar14 = 0;
    FUN_103413ed4(0,0x112f626d0,&PTR__OBJC_CLASS___CAAnimation_1126c78d8);
    func_0x000107c61174(puVar7);
    lVar11 = lVar13;
    func_0x000107c5fc48(lVar13,uVar14);
    func_0x000107c61574(lVar13);
    func_0x000107c5272c(puVar10);
    func_0x000107c61170(lVar11);
    func_0x000107c61174(puVar10);
    func_0x000107c3e820(puVar7);
    dVar17 = dVar16;
    func_0x000107c42378(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c54358(dVar16 + dVar17,puVar10);
    func_0x000107c57ce4(puVar10);
    func_0x000107c549b8(puVar10);
    func_0x000107c61170(puVar10);
    puVar18 = &UNK_1106520f0;
    func_0x000107c613fc(&UNK_1106520f0,0x40,7);
    *(ulong *)(puVar18 + 0x10) = uVar2;
    *(undefined ***)(puVar18 + 0x18) = &PTR_DAT_110651ef8;
    *(ulong *)(puVar18 + 0x20) = uVar3;
    *(long *)(puVar18 + 0x28) = lVar12;
    *(code **)(puVar18 + 0x30) = param_7;
    *(undefined8 *)(puVar18 + 0x38) = param_8;
    uStack_80 = 0x103413f3c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110652108;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar18;
    func_0x000107c60bc4(ppuVar9);
    puVar18 = puStack_78;
    func_0x000107c61174(uVar2);
    func_0x000107c61434(lVar12);
    func_0x000100b64c10(param_7,param_8);
    func_0x000107c61574(puVar18);
    func_0x000107c5362c(puVar5);
    func_0x000107c60bd0(ppuVar9);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c4aba4(uVar14);
    func_0x000107c61180();
    func_0x000107c5fadc(uVar3,lVar12);
    func_0x000107c6142c(lVar12);
    func_0x000107c3d5a4(uVar14);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar3);
    func_0x000107c3fe58(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 103413ca4; end: 103413d7b;  */

void FUN_103413ca4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c5fadc(param_3,param_4);
  lVar3 = lVar2;
  func_0x000107c3dcf8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  if (lVar3 != 0) {
    func_0x000107c61170(lVar3);
    (**(code **)(param_2 + 0x10))(0,0xe000000000000000,lVar1,param_2);
    func_0x000107c550d8(param_1);
  }
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 103413d7c; end: 103413dbb;  */

void FUN_103413d7c(void)

{
  FUN_10341333c();
  return;
}



/* Entry: 103413dbc; end: 103413ddb;  */

void FUN_103413dbc(void)

{
  long unaff_x20;
  
  FUN_103413ca4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 103413ddc; end: 103413e53;  */

void FUN_103413ddc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103413ed4(0,param_1,param_2);
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



/* Entry: 103413e54; end: 103413eaf;  */

void FUN_103413e54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103413eb0; end: 103413ed3;  */

long * FUN_103413eb0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103413ed4; end: 103413f13;  */

void FUN_103413ed4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103413f14; end: 103413f3f;  */

void FUN_103413f14(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103413f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103413f40; end: 103413f6f;  */

void FUN_103413f40(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103413f70; end: 103413f7b;  */

void FUN_103413f70(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103413f7c; end: 10341424f;  */

void FUN_103413f7c(undefined *param_1,undefined *param_2,undefined *param_3,code *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined8 uVar11;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  ppuVar8 = &puStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *unaff_x20;
  lVar2 = unaff_x20[2];
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar6 = param_5;
  if (lVar3 != 0) {
    unaff_x25 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (unaff_x25 != 0) {
      lVar3 = unaff_x25;
      func_0x000107c4a850();
      func_0x000107c61180();
      func_0x000107c615e8(unaff_x25);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126ad220;
        func_0x000107c610f8();
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c46c84();
        func_0x000107c61170(param_2);
        puVar5 = (undefined *)0x0;
        FUN_103414460(0,0x112f66948,&PTR_PTR_1126dea68);
        func_0x000107c614e8();
        puStack_a0 = (undefined *)0x0;
        func_0x000107c505d0();
        func_0x000107c61180();
        param_1 = puStack_a0;
        param_3 = puVar4;
        if (puVar5 == (undefined *)0x0) {
          puVar5 = puStack_a0;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar5);
          func_0x000107c61654();
          (*param_4)(0,0,0,0);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c614ac(param_1);
          param_2 = param_1;
        }
        else {
          func_0x000107c61174();
          param_2 = puVar5;
          func_0x000107c5060c();
          func_0x000107c61180();
          puVar6 = &UNK_1106521c8;
          func_0x000107c613fc(&UNK_1106521c8,0x28,7);
          *(code **)(puVar6 + 0x10) = param_4;
          *(undefined **)(puVar6 + 0x18) = param_5;
          *(undefined8 *)(puVar6 + 0x20) = uVar11;
          puVar7 = &UNK_1106521f0;
          func_0x000107c613fc(&UNK_1106521f0,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_103414250;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcStack_80 = FUN_1034143f4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_101d58ff0;
          puStack_88 = &UNK_110652208;
          puStack_78 = puVar7;
          func_0x000107c60bc4();
          puVar6 = puStack_78;
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar6);
          func_0x000107c4db80(param_2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(param_2);
          param_4 = (code *)ppuVar8;
          param_1 = puVar5;
        }
        goto LAB_1034141b8;
      }
    }
  }
  (*param_4)(0,0,0,0);
LAB_1034141b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uVar9 = 0;
  pcStack_a8 = FUN_103414250;
  pcVar1 = *(code **)(puVar6 + 0x10);
  puStack_f0 = param_5;
  lStack_e8 = unaff_x25;
  puStack_e0 = param_2;
  puStack_d8 = param_3;
  lStack_d0 = lVar3;
  puStack_c8 = param_1;
  puStack_c0 = puVar6;
  pcStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000100672b50();
  if (lStack_f8 == 0) {
    FUN_1034147e0(auStack_110,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar6 = PTR___sypN_11034f1a8 + 8;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c6147c(&uStack_120,auStack_110,puVar6,PTR___sSSN_11034da80,6);
    if ((uVar9 & 1) != 0) {
      uVar9 = uStack_120 & 0xffffffffffff;
      if ((uStack_118 & 0x2000000000000000) != 0) {
        uVar9 = uStack_118 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        uVar9 = uStack_120;
        uVar10 = uStack_118;
        FUN_1034144a0(uStack_120,uStack_118);
        func_0x000107c6142c(uStack_118);
        (*pcVar1)(uVar9,uVar10,puVar6,puVar4);
        func_0x000107c6142c(uVar10);
        return;
      }
      func_0x000107c6142c(uStack_118);
    }
  }
  (*pcVar1)(0,0,0,0);
  return;
}



/* Entry: 103414250; end: 103414353;  */

void FUN_103414250(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  uVar2 = 0;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    FUN_1034147e0(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar4 = PTR___sypN_11034f1a8 + 8;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c6147c(&uStack_80,auStack_70,puVar4,PTR___sSSN_11034da80,6);
    if ((uVar2 & 1) != 0) {
      uVar2 = uStack_80 & 0xffffffffffff;
      if ((uStack_78 & 0x2000000000000000) != 0) {
        uVar2 = uStack_78 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        uVar2 = uStack_80;
        uVar3 = uStack_78;
        FUN_1034144a0(uStack_80,uStack_78);
        func_0x000107c6142c(uStack_78);
        (*pcVar1)(uVar2,uVar3,puVar4,puVar5);
        func_0x000107c6142c(uVar3);
        return;
      }
      func_0x000107c6142c(uStack_78);
    }
  }
  (*pcVar1)(0,0,0,0);
  return;
}



/* Entry: 103414354; end: 1034143f3;  */

void FUN_103414354(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long alStack_50 [4];
  
  if (param_1 == 0) {
    alStack_50[0] = 0;
    uVar1 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    uVar1 = 0;
    FUN_103414460(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    alStack_50[0] = param_1;
  }
  alStack_50[3] = uVar1;
  func_0x000107c61174(param_1);
  (*param_3)(alStack_50,param_2);
  FUN_1034147e0(alStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1034143f4; end: 103414417;  */

void FUN_1034143f4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long alStack_50 [4];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    alStack_50[0] = 0;
    uVar2 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    uVar2 = 0;
    FUN_103414460(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0,
                  *(undefined8 *)(unaff_x20 + 0x18));
    alStack_50[0] = param_1;
  }
  alStack_50[3] = uVar2;
  func_0x000107c61174(param_1);
  (*pcVar1)(alStack_50,param_2);
  FUN_1034147e0(alStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103414418; end: 10341443b;  */

void FUN_103414418(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341443c; end: 10341443f;  */

void FUN_10341443c(undefined *param_1,undefined *param_2,undefined *param_3,code *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined8 uVar11;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  ppuVar8 = &puStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *unaff_x20;
  lVar2 = unaff_x20[2];
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar6 = param_5;
  if (lVar3 != 0) {
    unaff_x25 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (unaff_x25 != 0) {
      lVar3 = unaff_x25;
      func_0x000107c4a850();
      func_0x000107c61180();
      func_0x000107c615e8(unaff_x25);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126ad220;
        func_0x000107c610f8();
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c46c84();
        func_0x000107c61170(param_2);
        puVar5 = (undefined *)0x0;
        FUN_103414460(0,0x112f66948,&PTR_PTR_1126dea68);
        func_0x000107c614e8();
        puStack_a0 = (undefined *)0x0;
        func_0x000107c505d0();
        func_0x000107c61180();
        param_1 = puStack_a0;
        param_3 = puVar4;
        if (puVar5 == (undefined *)0x0) {
          puVar5 = puStack_a0;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar5);
          func_0x000107c61654();
          (*param_4)(0,0,0,0);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c614ac(param_1);
          param_2 = param_1;
        }
        else {
          func_0x000107c61174();
          param_2 = puVar5;
          func_0x000107c5060c();
          func_0x000107c61180();
          puVar6 = &UNK_1106521c8;
          func_0x000107c613fc(&UNK_1106521c8,0x28,7);
          *(code **)(puVar6 + 0x10) = param_4;
          *(undefined **)(puVar6 + 0x18) = param_5;
          *(undefined8 *)(puVar6 + 0x20) = uVar11;
          puVar7 = &UNK_1106521f0;
          func_0x000107c613fc(&UNK_1106521f0,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_103414250;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcStack_80 = FUN_1034143f4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_101d58ff0;
          puStack_88 = &UNK_110652208;
          puStack_78 = puVar7;
          func_0x000107c60bc4();
          puVar6 = puStack_78;
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar6);
          func_0x000107c4db80(param_2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(param_2);
          param_4 = (code *)ppuVar8;
          param_1 = puVar5;
        }
        goto LAB_1034141b8;
      }
    }
  }
  (*param_4)(0,0,0,0);
LAB_1034141b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uVar9 = 0;
  pcStack_a8 = FUN_103414250;
  pcVar1 = *(code **)(puVar6 + 0x10);
  puStack_f0 = param_5;
  lStack_e8 = unaff_x25;
  puStack_e0 = param_2;
  puStack_d8 = param_3;
  lStack_d0 = lVar3;
  puStack_c8 = param_1;
  puStack_c0 = puVar6;
  pcStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000100672b50();
  if (lStack_f8 == 0) {
    FUN_1034147e0(auStack_110,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar6 = PTR___sypN_11034f1a8 + 8;
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c6147c(&uStack_120,auStack_110,puVar6,PTR___sSSN_11034da80,6);
    if ((uVar9 & 1) != 0) {
      uVar9 = uStack_120 & 0xffffffffffff;
      if ((uStack_118 & 0x2000000000000000) != 0) {
        uVar9 = uStack_118 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        uVar9 = uStack_120;
        uVar10 = uStack_118;
        FUN_1034144a0(uStack_120,uStack_118);
        func_0x000107c6142c(uStack_118);
        (*pcVar1)(uVar9,uVar10,puVar6,puVar4);
        func_0x000107c6142c(uVar10);
        return;
      }
      func_0x000107c6142c(uStack_118);
    }
  }
  (*pcVar1)(0,0,0,0);
  return;
}



/* Entry: 103414440; end: 10341445f;  */

void FUN_103414440(void)

{
  func_0x000107c61168(&PTR_PTR_112f66990);
  return;
}



/* Entry: 103414460; end: 10341449f;  */

void FUN_103414460(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1034144a0; end: 1034147df;  */

ulong FUN_1034144a0(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long extraout_x8;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long alStack_90 [2];
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar11 = (long)&uStack_80 + lVar1;
  lVar2 = 0;
  uStack_70 = param_1;
  puStack_68 = (undefined *)param_2;
  func_0x000107c5ef14();
  pcVar13 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  lVar3 = lVar11;
  (*pcVar13)(lVar11,1,1,lVar2);
  func_0x000100e8b654();
  puVar4 = &UNK_110652240;
  *(long *)((long)alStack_90 + lVar1) = lVar3;
  *(long *)((long)alStack_90 + lVar1 + 8) = lVar3;
  uVar7 = 0;
  uVar10 = 0;
  func_0x000107c60218();
  puStack_78 = puVar4;
  FUN_1034147e0(lVar11,0x112d483a8,&UNK_10d910f00);
  if ((uVar10 & 0xff) != 1) {
    uVar6 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = param_2 >> 0x38 & 0xf;
    }
    uVar10 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar10 = 1;
    }
    uVar12 = 7;
    if (uVar10 == 0) {
      uVar12 = 0xb;
    }
    uStack_80 = uVar6 << 2;
    if (uStack_80 < uVar7 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1034147d8);
      uStack_70 = param_1;
      puStack_68 = (undefined *)param_2;
      (*pcVar13)();
    }
    uVar12 = uVar12 | uVar6 << 0x10;
    uStack_70 = param_1;
    puStack_68 = (undefined *)param_2;
    (*pcVar13)(lVar11,1,1,lVar2);
    puVar4 = &UNK_110652250;
    *(long *)((long)alStack_90 + lVar1) = lVar3;
    *(long *)((long)alStack_90 + lVar1 + 8) = lVar3;
    uVar8 = 0;
    uVar6 = uVar7;
    func_0x000107c60218();
    FUN_1034147e0(lVar11,0x112d483a8,&UNK_10d910f00);
    if (((uint)uVar6 & 0xff) != 1) {
      uVar5 = 0xf;
      puVar9 = puStack_78;
      uVar6 = param_2;
      func_0x000107c5fbd8(0xf,puStack_78,param_1,param_2);
      func_0x000107c5fb2c();
      func_0x000107c6142c(uVar6);
      if ((ulong)puVar4 >> 0xe < uVar7 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1034147dc);
        (*pcVar13)();
      }
      uVar6 = param_2;
      func_0x000107c5fbd8(uVar7,puVar4,param_1,param_2);
      func_0x000107c5fb2c();
      func_0x000107c6142c(uVar6);
      if (uVar8 >> 0xe <= uStack_80) {
        func_0x000107c5fbd8(uVar8,uVar12,param_1,param_2);
        func_0x000107c5fb2c();
        func_0x000107c6142c(param_2);
        uVar6 = uVar5;
        func_0x000107c5fadc(uVar5,puVar9);
        func_0x000107c4adac();
        func_0x000107c61170(uVar6);
        uVar6 = uVar7;
        func_0x000107c5fadc(uVar7,puVar4);
        func_0x000107c4adac();
        func_0x000107c61170(uVar6);
        uStack_70 = uVar5;
        puStack_68 = puVar9;
        func_0x000107c61434(puVar9);
        func_0x000107c5fb78(uVar7,puVar4);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puVar4);
        puVar4 = puStack_68;
        func_0x000107c61434(puStack_68);
        func_0x000107c5fb78(uVar8,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(puVar4);
        return uStack_70;
      }
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1034147e0);
      (*pcVar13)();
    }
  }
  func_0x000107c61434(param_2);
  return param_1;
}



/* Entry: 1034147e0; end: 10341481f;  */

undefined8 FUN_1034147e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103414820; end: 1034149d3;  */

long FUN_103414820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0x7069726373627573;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xec0000006e6f6974;
  *(undefined8 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c61614(unaff_x20 + 0x50,0);
  puVar1 = &UNK_10dbc25b0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x60) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  func_0x000107c61604(unaff_x20 + 0x50,param_6);
  func_0x000107c615e8(param_6);
  return unaff_x20;
}



/* Entry: 1034149d4; end: 103414a33;  */

void FUN_1034149d4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_103414a34(unaff_x20 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103414a34; end: 103414a57;  */

undefined8 FUN_103414a34(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103414a58; end: 103414a9b;  */

void FUN_103414a58(void)

{
  FUN_1034149d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103414a9c; end: 103414ac7;  */

undefined1  [16] FUN_103414a9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103414ac8; end: 103414aeb;  */

undefined8 FUN_103414ac8(void)

{
  return 1;
}



/* Entry: 103414aec; end: 1034151ef;  */

void FUN_103414aec(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uVar10 = *(ulong *)(param_3 + 0x30);
  if (uVar10 == 0) {
    alStack_c0[0] = CONCAT71(alStack_c0[0]._1_7_,3);
    uStack_a0 = 1;
    uVar9 = unaff_x20[0xc];
    FUN_1034155b4(alStack_c0,&uStack_e8,0x112ee4d20,&UNK_10db0ff90);
    puVar3 = &UNK_110652348;
    func_0x000107c613fc(&UNK_110652348,0x41,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = uStack_e0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_e8;
    *(undefined8 *)(puVar3 + 0x38) = uStack_d0;
    *(undefined8 *)(puVar3 + 0x30) = uStack_d8;
    puVar3[0x40] = uStack_c8;
    pcStack_78 = FUN_103415210;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110652360;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar4);
    goto LAB_103414f24;
  }
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[0xd];
  uVar2 = uVar10;
  lVar6 = param_2;
  func_0x000107c61174();
  if (uVar11 == 0) {
    uVar15 = 0;
    lVar14 = 0;
    lVar7 = lVar6;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar15 = uVar11;
    func_0x000107c5faec();
    lVar7 = lVar6;
    func_0x000107c61170(uVar11);
    lVar14 = lVar6;
  }
  uVar11 = uVar2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar5 = uVar11;
  func_0x000107c5faec();
  func_0x000107c61170(uVar11);
  if (lVar14 == 0) {
    func_0x000107c6142c(lVar7);
LAB_103414ce4:
    uVar12 = unaff_x20[0xd];
    unaff_x20[0xd] = uVar10;
    func_0x000107c61170(uVar12);
    lVar6 = unaff_x20[6];
    func_0x000107c614f0(unaff_x20[5]);
    pcVar13 = *(code **)(lVar6 + 8);
    uVar10 = uVar2;
    func_0x000107c61174();
    bVar1 = (byte)uVar10;
    (*pcVar13)();
    *(byte *)(unaff_x20 + 0xe) = bVar1 & 1;
  }
  else if (uVar15 == uVar5 && lVar14 == lVar7) {
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar14);
  }
  else {
    func_0x000107c605b8(uVar15,lVar14,uVar5,lVar7,0);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar14);
    if ((uVar15 & 1) == 0) goto LAB_103414ce4;
  }
  if ((unaff_x20[0xf] == 0) && (lVar6 = unaff_x20[7], lVar6 != 0)) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      puVar3 = &UNK_1106523e8;
      func_0x000107c613fc(&UNK_1106523e8,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      pcStack_78 = FUN_1034155fc;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1021e83b0;
      puStack_80 = &UNK_1106524c8;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_70);
      lVar14 = lVar7;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar7);
      uVar12 = unaff_x20[0xf];
      unaff_x20[0xf] = lVar14;
      func_0x000107c61170(uVar12);
    }
  }
  uVar10 = 0x7574617453746567;
  if (((param_1 == 0x7574617453746567) && (param_2 == -0x16ffffffffffff8d)) ||
     (func_0x000107c605b8(0x7574617453746567,0xe900000000000073,param_1,param_2,0),
     (uVar10 & 1) != 0)) {
    lVar6 = 0x112d7e658;
    func_0x0001000285a8(0x112d7e658,&UNK_10db0fbd0);
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined8 *)(lVar6 + 0x20) = 0x656c626967696c65;
    *(undefined8 *)(lVar6 + 0x28) = 0xe800000000000000;
    uVar9 = unaff_x20[5];
    lVar7 = unaff_x20[6];
    func_0x000107c614f0(uVar9);
    uVar10 = uVar2;
    (**(code **)(lVar7 + 8))(uVar2,uVar9,lVar7);
    *(byte *)(lVar6 + 0x30) = (byte)uVar10 & 1;
    lVar7 = lVar6;
    func_0x0001003d8468();
    func_0x000107c61588(lVar6);
    FUN_1034158e4((undefined8 *)(lVar6 + 0x20),0x112d7e660,&UNK_10d93c760);
    uVar9 = 0x112e17d60;
    func_0x0001000285a8(0x112e17d60,&UNK_10dbc2660);
    uStack_a0 = 0;
    uVar12 = unaff_x20[0xc];
    alStack_c0[0] = lVar7;
    uStack_a8 = uVar9;
    FUN_1034155b4(alStack_c0,&uStack_e8,0x112ee4d20,&UNK_10db0ff90);
    puVar3 = &UNK_110652438;
    func_0x000107c613fc(&UNK_110652438,0x41,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = uStack_e0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_e8;
    *(undefined8 *)(puVar3 + 0x38) = uStack_d0;
    *(undefined8 *)(puVar3 + 0x30) = uStack_d8;
    puVar3[0x40] = uStack_c8;
    pcStack_78 = (code *)0x10341593c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110652450;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar12);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar10 = 0;
    if (((param_1 == 0x5574736575716572) && (param_2 == -0x11ff9a9b9e8d9890)) ||
       (func_0x000107c605b8(0x5574736575716572,0xee00656461726770,param_1,param_2,0),
       (uVar10 & 1) != 0)) {
      uVar12 = unaff_x20[5];
      lVar6 = unaff_x20[6];
      func_0x000107c614f0(uVar12);
      puVar3 = &UNK_1106523e8;
      func_0x000107c613fc(&UNK_1106523e8,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar8 = &UNK_110652410;
      func_0x000107c613fc(&UNK_110652410,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar3;
      *(undefined8 *)(puVar8 + 0x18) = param_4;
      *(undefined8 *)(puVar8 + 0x20) = param_5;
      *(undefined8 *)(puVar8 + 0x28) = uVar9;
      pcVar13 = *(code **)(lVar6 + 0x10);
      func_0x000107c6157c(param_5);
      func_0x000107c6157c(puVar3);
      (*pcVar13)(uVar2,FUN_103415254,puVar8,uVar12,lVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(uVar2);
      return;
    }
    alStack_c0[0] = CONCAT71(alStack_c0[0]._1_7_,2);
    uStack_a0 = 1;
    uVar9 = unaff_x20[0xc];
    FUN_1034155b4(alStack_c0,&uStack_e8,0x112ee4d20,&UNK_10db0ff90);
    puVar3 = &UNK_110652398;
    func_0x000107c613fc(&UNK_110652398,0x41,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x28) = uStack_e0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_e8;
    *(undefined8 *)(puVar3 + 0x38) = uStack_d0;
    *(undefined8 *)(puVar3 + 0x30) = uStack_d8;
    puVar3[0x40] = uStack_c8;
    pcStack_78 = (code *)0x103415938;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1106523b0;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar4);
  }
LAB_103414f24:
  FUN_1034158e4(alStack_c0,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 1034151f0; end: 10341520f;  */

void FUN_1034151f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f66a30);
  return;
}



/* Entry: 103415210; end: 103415237;  */

void FUN_103415210(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20);
  return;
}



/* Entry: 103415238; end: 103415253;  */

void FUN_103415238(long param_1,long param_2)

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



/* Entry: 103415254; end: 10341557f;  */

void FUN_103415254(uint param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((param_1 >> 7 & 1) == 0) {
    lVar3 = 0x112d7e658;
    func_0x0001000285a8(0x112d7e658,&UNK_10db0fbd0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = 0x6269726373627573;
    *(undefined8 *)(lVar3 + 0x28) = 0xea00000000006465;
    *(byte *)(lVar3 + 0x30) = (byte)param_1 & 1;
    lVar4 = lVar3;
    func_0x0001003d8468();
    func_0x000107c61588(lVar3);
    FUN_1034158e4((undefined8 *)(lVar3 + 0x20),0x112d7e660,&UNK_10d93c760);
    uVar9 = 0x112e17d60;
    puVar6 = &UNK_10dbc2660;
  }
  else {
    param_1 = param_1 & 0x7f;
    if (1 < param_1) {
      alStack_f8[0] = CONCAT71(alStack_f8[0]._1_7_,3);
      uStack_d8 = 1;
      goto LAB_103415430;
    }
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0x6269726373627573;
    *(undefined8 *)(lVar3 + 0x28) = 0xea00000000006465;
    *(undefined **)(lVar3 + 0x48) = PTR___sSbN_11034dd40;
    *(undefined8 *)(lVar3 + 0x50) = 0x6e6f73616572;
    puVar6 = PTR___sSSN_11034da80;
    uVar9 = 0x6e6f6f735f6f6f74;
    if (param_1 != 0) {
      uVar9 = 0xd000000000000011;
    }
    uVar1 = 0xe800000000000000;
    if (param_1 != 0) {
      uVar1 = 0x800000010f0e50a0;
    }
    *(undefined1 *)(lVar3 + 0x30) = 0;
    *(undefined **)(lVar3 + 0x78) = puVar6;
    *(undefined8 *)(lVar3 + 0x58) = 0xe600000000000000;
    *(undefined8 *)(lVar3 + 0x60) = uVar9;
    *(undefined8 *)(lVar3 + 0x68) = uVar1;
    lVar4 = lVar3;
    func_0x000100214a84();
    func_0x000107c61588(lVar3);
    uVar9 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar9);
    uVar9 = 0x112d472a8;
    puVar6 = &UNK_10d90e490;
  }
  func_0x0001000285a8(uVar9,puVar6);
  uStack_d8 = 0;
  alStack_f8[0] = lVar4;
  uStack_e0 = uVar9;
LAB_103415430:
  func_0x000107c61428(lVar5 + 0x10,auStack_110,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    (*pcVar2)(alStack_f8);
    FUN_1034158e4(alStack_f8,0x112ee4d20,&UNK_10db0ff90);
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x60);
    FUN_1034155b4(alStack_f8,&uStack_138,0x112ee4d20,&UNK_10db0ff90);
    puVar6 = &UNK_110652488;
    func_0x000107c613fc(&UNK_110652488,0x41,7);
    *(code **)(puVar6 + 0x10) = pcVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    *(undefined8 *)(puVar6 + 0x28) = uStack_130;
    *(undefined8 *)(puVar6 + 0x20) = uStack_138;
    *(undefined8 *)(puVar6 + 0x38) = uStack_120;
    *(undefined8 *)(puVar6 + 0x30) = uStack_128;
    puVar6[0x40] = uStack_118;
    uStack_b0 = 0x103415940;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1106524a0;
    ppuVar7 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_a8;
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar7);
    FUN_1034158e4(alStack_f8,0x112ee4d20,&UNK_10db0ff90);
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 103415580; end: 1034155b3;  */

void FUN_103415580(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(char *)(unaff_x20 + 0x40) == '\0') {
    func_0x000100183ab8(unaff_x20 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034155b4; end: 1034155fb;  */

undefined8 FUN_1034155b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034155fc; end: 1034156cf;  */

void FUN_1034155fc(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    func_0x000107c615f0(uVar3);
    func_0x000107c61574(lVar1);
    pcStack_58 = FUN_1034156d0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106524f0;
    ppuVar2 = &puStack_78;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1034156d0; end: 1034158e3;  */

void FUN_1034156d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_f0 [104];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_f0,0,0);
  uVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (uVar4 == 0) {
    return;
  }
  lVar8 = *(long *)(uVar4 + 0x68);
  if (lVar8 == 0) goto LAB_1034158bc;
  lVar9 = *(long *)(uVar4 + 0x30);
  func_0x000107c614f0(*(undefined8 *)(uVar4 + 0x28));
  pcVar11 = *(code **)(lVar9 + 8);
  func_0x000107c61174();
  lVar9 = lVar8;
  (*pcVar11)();
  if ((*(byte *)(uVar4 + 0x70) == 2) || ((((uint)lVar9 ^ (uint)*(byte *)(uVar4 + 0x70)) & 1) != 0))
  {
    lVar5 = uVar4 + 0x50;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar10 = *(long *)(uVar4 + 0x58);
      lVar6 = lVar5;
      func_0x000107c614f0();
      uVar7 = uVar4;
      (**(code **)(lVar10 + 0x30))(uVar4,&PTR_DAT_110652310,lVar6,lVar10);
      func_0x000107c615e8(lVar5);
      if ((uVar7 & 1) == 0) goto LAB_1034158b4;
    }
    bVar3 = (byte)lVar9 & 1;
    *(byte *)(uVar4 + 0x70) = bVar3;
    lVar9 = *(long *)(uVar4 + 0x40);
    if (lVar9 != 0) {
      lVar10 = *(long *)(uVar4 + 0x48);
      func_0x000107c614f0(lVar9);
      uVar1 = *(undefined8 *)(uVar4 + 0x10);
      uVar2 = *(undefined8 *)(uVar4 + 0x18);
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined8 *)(lVar5 + 0x20) = 0x656c626967696c65;
      *(undefined8 *)(lVar5 + 0x28) = 0xe800000000000000;
      *(undefined **)(lVar5 + 0x48) = PTR___sSbN_11034dd40;
      *(byte *)(lVar5 + 0x30) = bVar3;
      func_0x000107c61434(uVar2);
      lVar6 = lVar5;
      func_0x000100214a84();
      func_0x000107c61588(lVar5);
      FUN_1034158e4((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      uStack_78 = 0x6843737574617473;
      uStack_70 = 0xed00006465676e61;
      uStack_88 = uVar1;
      uStack_80 = uVar2;
      lStack_68 = lVar6;
      (**(code **)(lVar10 + 0x20))(&uStack_88,0,0,lVar9,lVar10);
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c(uVar2);
    }
  }
LAB_1034158b4:
  func_0x000107c61170(lVar8);
LAB_1034158bc:
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1034158e4; end: 103415923;  */

undefined8 FUN_1034158e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


