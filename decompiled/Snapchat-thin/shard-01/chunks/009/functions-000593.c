/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101600374; end: 1016003ab;  */

undefined1  [16] FUN_101600374(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb36e0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 1016003ac; end: 1016003e3;  */

uint FUN_1016003ac(long param_1,long param_2)

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
  func_0x000101601b64();
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



/* Entry: 1016003e4; end: 101600483;  */

/* WARNING: Possible PIC construction at 0x000101600430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101600440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101600434) */
/* WARNING: Removing unreachable block (ram,0x000101600444) */

void FUN_1016003e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9760 != -1) {
    func_0x000107c61568(0x112db9760,0x1016002dc);
  }
  uVar5 = uRam0000000113801460;
  uVar4 = uRam0000000113801458;
  uVar3 = uRam0000000113801450;
  uVar2 = uRam0000000113801448;
  uVar1 = uRam0000000113801440;
  *param_1 = uRam0000000113801438;
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



/* Entry: 101600484; end: 101600497;  */

void FUN_101600484(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db97c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db97c8,&UNK_10d96bac0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101600498; end: 1016004cf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101600498(undefined8 *param_1,undefined8 param_2)

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
  FUN_1016013e4();
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



/* Entry: 1016004d0; end: 101600517;  */

void FUN_1016004d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96bad0,0xd,2);
  uRam0000000113801470 = uStack_38;
  uRam0000000113801468 = uStack_40;
  uRam0000000113801480 = uStack_28;
  uRam0000000113801478 = uStack_30;
  uRam0000000113801490 = uStack_18;
  uRam0000000113801488 = uStack_20;
  return;
}



/* Entry: 101600518; end: 1016005af;  */

void FUN_101600518(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10160056c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000101600588;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101600554;
code_r0x000101600588:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_101600554:
    (*pcVar3)();
  }
  goto LAB_10160056c;
}



/* Entry: 1016005b0; end: 101600653;  */

void FUN_1016005b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101600654; end: 10160068b;  */

undefined1  [16] FUN_101600654(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3710;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 10160068c; end: 1016006c3;  */

uint FUN_10160068c(long param_1,long param_2)

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
  FUN_101601b24();
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



/* Entry: 1016006c4; end: 101600763;  */

/* WARNING: Possible PIC construction at 0x000101600710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101600720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101600714) */
/* WARNING: Removing unreachable block (ram,0x000101600724) */

void FUN_1016006c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9770 != -1) {
    func_0x000107c61568(0x112db9770,FUN_1016004d0);
  }
  uVar5 = uRam0000000113801490;
  uVar4 = uRam0000000113801488;
  uVar3 = uRam0000000113801480;
  uVar2 = uRam0000000113801478;
  uVar1 = uRam0000000113801470;
  *param_1 = uRam0000000113801468;
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



/* Entry: 101600764; end: 101600777;  */

void FUN_101600764(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db97b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db97b8,&UNK_10d96bab8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101600778; end: 1016007ab;  */

void FUN_101600778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1016007ac; end: 1016008bf;  */

void FUN_1016007ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016008c0; end: 101600e93;  */

void FUN_1016008c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_2 + 0x48);
      puVar25 = (ulong *)(param_1 + 0x28);
      do {
        uVar18 = puVar25[-1];
        uVar3 = *puVar25;
        uVar20 = puVar25[1];
        uVar4 = puVar25[2];
        uVar1 = puVar25[3];
        uVar5 = puVar25[4];
        uVar6 = puVar24[-4];
        uVar13 = puVar24[-3];
        uVar7 = puVar24[-2];
        uVar2 = puVar24[-1];
        uVar8 = *puVar24;
        if ((((uVar18 != puVar24[-5]) || (uVar3 != uVar6)) &&
            (func_0x000107c605b8(uVar18,uVar3,puVar24[-5],uVar6,0), (uVar18 & 1) == 0)) ||
           (((uVar20 != uVar13 || (uVar4 != uVar7)) &&
            (func_0x000107c605b8(uVar20,uVar4,uVar13,uVar7,0), (uVar20 & 1) == 0))))
        goto LAB_101600e2c;
        uVar10 = (uint)(uVar5 >> 0x20);
        uVar16 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar8 >> 0x20);
        uVar19 = uVar11 >> 0x1e;
        iVar22 = (int)uVar1;
        if (uVar5 >> 0x3e == 3) {
          uVar18 = 0;
          if (((uVar1 != 0) || (uVar5 != 0xc000000000000000)) ||
             ((uVar8 >> 0x3e < 3 || ((uVar18 = 0, uVar2 != 0 || (uVar8 != 0xc000000000000000))))))
          goto joined_r0x000101600c54;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar16 == 0) {
              uVar18 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar17,iVar22)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e80);
                (*pcVar12)();
              }
              uVar18 = (ulong)(iVar17 - iVar22);
            }
joined_r0x000101600c54:
            if (1 < uVar11 >> 0x1e) goto LAB_101600a50;
LAB_101600a84:
            if (uVar19 == 0) {
              uVar20 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar17,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e78);
                (*pcVar12)();
              }
              uVar20 = (ulong)(iVar17 - (int)uVar2);
            }
          }
          else {
            if (uVar16 == 2) {
              uVar18 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e7c);
                (*pcVar12)();
              }
              goto joined_r0x000101600c54;
            }
            uVar18 = 0;
            if (uVar19 < 2) goto LAB_101600a84;
LAB_101600a50:
            if (uVar19 != 2) {
              if (uVar18 == 0) goto LAB_101600920;
              goto LAB_101600e2c;
            }
            uVar20 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e74);
              (*pcVar12)();
            }
          }
          if (uVar18 != uVar20) goto LAB_101600e2c;
          if (0 < (long)uVar18) {
            if (uVar16 < 2) {
              if (uVar16 != 0) {
                lVar21 = (long)iVar22;
                uVar18 = ((long)uVar1 >> 0x20) - lVar21;
                if ((long)uVar1 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e84);
                  (*pcVar12)();
                }
                func_0x000107c61434(uVar3);
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar1,uVar5);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar7);
                uVar20 = uVar2;
                func_0x00010006c00c(uVar2,uVar8);
                func_0x000107c5ec30();
                if (uVar20 == 0) {
                  func_0x000107c5ec38();
                  uVar18 = 0;
                  lVar21 = 0;
                }
                else {
                  uVar13 = uVar20;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e90);
                    (*pcVar12)();
                  }
                  uVar20 = (lVar21 - uVar13) + uVar20;
                  func_0x000107c5ec38();
                  if ((long)uVar18 <= (long)uVar13) {
                    uVar13 = uVar18;
                  }
                  uVar18 = 0;
                  if (uVar20 != 0) {
                    uVar18 = uVar20;
                  }
                  lVar21 = 0;
                  if (uVar20 != 0) {
                    lVar21 = uVar13 + uVar20;
                  }
                }
LAB_101600dd4:
                FUN_100e25bdc(abStack_80,uVar18,lVar21,uVar2,uVar8);
                func_0x000107c6142c(uVar7);
                func_0x000107c6142c(uVar6);
                func_0x00010006c090(uVar2,uVar8);
                func_0x000107c6142c(uVar4);
                func_0x000107c6142c(uVar3);
                func_0x00010006c090(uVar1,uVar5);
                if ((abStack_80[0] & 1) != 0) goto LAB_101600920;
                goto LAB_101600e2c;
              }
              abStack_80[0] = (byte)uVar1;
              abStack_80[1] = (byte)(uVar1 >> 8);
              abStack_80[2] = (byte)(uVar1 >> 0x10);
              abStack_80[3] = (byte)(uVar1 >> 0x18);
              abStack_80[4] = (byte)(uVar1 >> 0x20);
              abStack_80[5] = (byte)(uVar1 >> 0x28);
              abStack_80[6] = (byte)(uVar1 >> 0x30);
              abStack_80[7] = (byte)(uVar1 >> 0x38);
              abStack_80[8] = (byte)uVar5;
              abStack_80[9] = (byte)(uVar5 >> 8);
              abStack_80[10] = (byte)(uVar5 >> 0x10);
              abStack_80[0xb] = (byte)(uVar5 >> 0x18);
              abStack_80[0xc] = (byte)(uVar5 >> 0x20);
              abStack_80[0xd] = (byte)(uVar5 >> 0x28);
              func_0x000107c61434(uVar3);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar1,uVar5);
              func_0x000107c61434(uVar6);
              func_0x000107c61434(uVar7);
              func_0x00010006c00c(uVar2,uVar8);
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80 + (uVar5 >> 0x30 & 0xff),uVar2,uVar8);
              func_0x000107c6142c(uVar7);
            }
            else {
              if (uVar16 == 2) {
                lVar21 = *(long *)(uVar1 + 0x10);
                lVar9 = *(long *)(uVar1 + 0x18);
                func_0x000107c61434(uVar3);
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar1,uVar5);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar7);
                uVar18 = uVar2;
                func_0x00010006c00c(uVar2,uVar8);
                func_0x000107c5ec30();
                uVar20 = uVar18;
                if (uVar18 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar20)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e8c);
                    (*pcVar12)();
                  }
                  uVar18 = (lVar21 - uVar20) + uVar18;
                }
                uVar13 = lVar9 - lVar21;
                if (SBORROW8(lVar9,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x101600e88);
                  (*pcVar12)();
                }
                func_0x000107c5ec38();
                if (uVar18 == 0) {
                  lVar21 = 0;
                }
                else {
                  if ((long)uVar13 <= (long)uVar20) {
                    uVar20 = uVar13;
                  }
                  lVar21 = uVar20 + uVar18;
                }
                goto LAB_101600dd4;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              func_0x000107c61434(uVar3);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar1,uVar5);
              func_0x000107c61434(uVar6);
              func_0x000107c61434(uVar7);
              func_0x00010006c00c(uVar2,uVar8);
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80,uVar2,uVar8);
              func_0x000107c6142c(uVar7);
            }
            func_0x000107c6142c(uVar6);
            func_0x00010006c090(uVar2,uVar8);
            func_0x000107c6142c(uVar4);
            func_0x000107c6142c(uVar3);
            func_0x00010006c090(uVar1,uVar5);
            if ((bStack_81 & 1) == 0) goto LAB_101600e2c;
          }
        }
LAB_101600920:
        puVar24 = puVar24 + 6;
        puVar25 = puVar25 + 6;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_101600e2c:
    uVar14 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar14);
  if (puRam0000000112db9750 != (undefined *)0x0) {
    return;
  }
  puVar15 = &DAT_10d96b938;
  func_0x000107c61520(&DAT_10d96b938,&UNK_1103e7bc0);
  puRam0000000112db9750 = puVar15;
  return;
}



/* Entry: 101600e94; end: 101600ed3;  */

void FUN_101600e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b938;
  func_0x000107c61520(&DAT_10d96b938,&UNK_1103e7bc0);
  puRam0000000112db9750 = puVar1;
  return;
}



/* Entry: 101600ed4; end: 101600f4f;  */

/* WARNING: Possible PIC construction at 0x000101600f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101600f08) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101600ed4(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
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
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101600f50; end: 1016011ef;  */

uint FUN_101600f50(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = param_1[4];
  uVar3 = param_1[3];
  uVar13 = param_1[6];
  uVar11 = param_1[5];
  uVar8 = param_1[8];
  uVar4 = param_1[7];
  uVar9 = param_2[4];
  uVar5 = param_2[3];
  uVar14 = param_2[6];
  uVar12 = param_2[5];
  uVar10 = param_2[8];
  uVar6 = param_2[7];
  uStack_d0 = uVar5;
  uStack_c8 = uVar9;
  uStack_c0 = uVar12;
  uStack_b8 = uVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  uStack_98 = uVar7;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_1016010ac;
    FUN_101600324(&uStack_a0,auStack_100);
    FUN_101600324(&uStack_d0,auStack_100);
LAB_101601124:
    FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
    uVar3 = *param_1;
    FUN_1016008c0(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)uVar3;
      goto LAB_1016011cc;
    }
  }
  else {
    if (uVar9 == 0) {
LAB_1016010ac:
      FUN_101600324(&uStack_a0,auStack_100);
      FUN_101600324(&uStack_d0,auStack_100);
      FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar3 = uVar5;
      uVar7 = uVar9;
      uVar11 = uVar12;
      uVar13 = uVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (((uVar3 == uVar5) && (uVar7 == uVar9)) ||
         (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar7,uVar5,uVar9,0), (uVar2 & 1) != 0)) {
        if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
           (uVar2 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar2 & 1) != 0)) {
          FUN_101600324(&uStack_a0,auStack_100);
          FUN_101600324(&uStack_d0,auStack_100);
          uVar2 = uVar4;
          FUN_100e25fcc(uVar4,uVar8,uVar6,uVar10);
          FUN_1015fcd28(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_101601124;
          goto LAB_1016011c4;
        }
        FUN_101600324(&uStack_a0,auStack_100);
        FUN_101600324(&uStack_d0,auStack_100);
      }
      else {
        FUN_101600324(&uStack_a0,auStack_100);
        FUN_101600324(&uStack_d0,auStack_100);
      }
      FUN_1015fcd28(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
LAB_1016011c4:
    FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_1016011cc:
  return uVar1 & 1;
}



/* Entry: 1016011f0; end: 1016012af;  */

void FUN_1016011f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b7f8;
  func_0x000107c61520(&UNK_10d96b7f8,&UNK_1103e7ab0);
  puRam0000000112db9758 = puVar1;
  return;
}



/* Entry: 1016012b0; end: 1016012d3;  */

void FUN_1016012b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016012d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016012d4; end: 101601313;  */

void FUN_1016012d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b7d0;
  func_0x000107c61520(&UNK_10d96b7d0,&UNK_1103e7ab0);
  puRam0000000112db9780 = puVar1;
  return;
}



/* Entry: 101601314; end: 10160132b;  */

void FUN_101601314(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016011f0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015fdf6c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10160132c; end: 10160136b;  */

void FUN_10160132c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b838;
  func_0x000107c61520(&UNK_10d96b838,&UNK_1103e7ab0);
  puRam0000000112db9788 = puVar1;
  return;
}



/* Entry: 10160136c; end: 10160138f;  */

void FUN_10160136c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101601390();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101601390; end: 1016013cf;  */

void FUN_101601390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b8a8;
  func_0x000107c61520(&UNK_10d96b8a8,&UNK_1103e7b38);
  puRam0000000112db9790 = puVar1;
  return;
}



/* Entry: 1016013d0; end: 1016013e3;  */

void FUN_1016013d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101601230)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1016013e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016013e4; end: 101601423;  */

void FUN_1016013e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b860;
  func_0x000107c61520(&DAT_10d96b860,&UNK_1103e7b38);
  puRam0000000112db9798 = puVar1;
  return;
}



/* Entry: 101601424; end: 101601427;  */

void FUN_101601424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b910;
  func_0x000107c61520(&UNK_10d96b910,&UNK_1103e7b38);
  puRam0000000112db97a0 = puVar1;
  return;
}



/* Entry: 101601428; end: 101601467;  */

void FUN_101601428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b910;
  func_0x000107c61520(&UNK_10d96b910,&UNK_1103e7b38);
  puRam0000000112db97a0 = puVar1;
  return;
}



/* Entry: 101601468; end: 10160148b;  */

void FUN_101601468(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10160148c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10160148c; end: 1016014cb;  */

void FUN_10160148c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b980;
  func_0x000107c61520(&UNK_10d96b980,&UNK_1103e7bc0);
  puRam0000000112db97a8 = puVar1;
  return;
}



/* Entry: 1016014cc; end: 1016014df;  */

void FUN_1016014cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101601270)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101600e94();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016014e0; end: 10160150f;  */

void FUN_1016014e0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101601510; end: 101601513;  */

void FUN_101601510(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b9e8;
  func_0x000107c61520(&UNK_10d96b9e8,&UNK_1103e7bc0);
  puRam0000000112db97b0 = puVar1;
  return;
}



/* Entry: 101601514; end: 101601553;  */

void FUN_101601514(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b9e8;
  func_0x000107c61520(&UNK_10d96b9e8,&UNK_1103e7bc0);
  puRam0000000112db97b0 = puVar1;
  return;
}



/* Entry: 101601554; end: 1016015a3;  */

/* WARNING: Possible PIC construction at 0x000101601570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101601574) */
/* WARNING: Removing unreachable block (ram,0x000101601598) */
/* WARNING: Removing unreachable block (ram,0x00010160157c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101601554(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1016015a4; end: 101601793;  */

undefined8 * FUN_1016015a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar3);
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar4 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar4;
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = lVar2;
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar3;
    uVar4 = param_2[7];
    uVar1 = param_2[8];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar4,uVar1);
    param_1[7] = uVar4;
    param_1[8] = uVar1;
  }
  return param_1;
}



/* Entry: 101601794; end: 101601863;  */

undefined8 FUN_101601794(undefined8 param_1)

{
  FUN_100cb68d0(param_1,&UNK_1103e7b38);
  return param_1;
}



/* Entry: 101601864; end: 10160191b;  */

int FUN_101601864(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10160191c; end: 10160194b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10160191c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10160194c; end: 101601a2b;  */

undefined8 * FUN_10160194c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 101601a2c; end: 101601a7f;  */

undefined8 * FUN_101601a2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101601a80; end: 101601b23;  */

int FUN_101601a80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101601b24; end: 101601be3;  */

void FUN_101601b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db97c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b954;
  func_0x000107c61520(&DAT_10d96b954,&UNK_1103e7bc0);
  puRam0000000112db97c0 = puVar1;
  return;
}



/* Entry: 101601be4; end: 101601c5f;  */

uint FUN_101601be4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101600ed4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101601c60; end: 101601caf;  */

void FUN_101601c60(void)

{
  FUN_100cb67e4();
  return;
}



/* Entry: 101601cb0; end: 101601cdf;  */

void FUN_101601cb0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101601ce0; end: 101601d1f;  */

void FUN_101601ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db9840;
  func_0x0001000285a8(0x112db9840,&UNK_10d96baf8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101601d20; end: 101601d47;  */

void FUN_101601d20(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101601d48; end: 101601df3;  */

void FUN_101601d48(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101601df4; end: 101601e07;  */

bool FUN_101601df4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101601e08; end: 101601e4f;  */

void FUN_101601e08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96bd90,0x85,2);
  uRam00000001138014a0 = uStack_38;
  uRam0000000113801498 = uStack_40;
  uRam00000001138014b0 = uStack_28;
  uRam00000001138014a8 = uStack_30;
  uRam00000001138014c0 = uStack_18;
  uRam00000001138014b8 = uStack_20;
  return;
}



/* Entry: 101601e50; end: 101601f87;  */

/* WARNING: Removing unreachable block (ram,0x000101601f84) */

void FUN_101601e50(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
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
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_101602684();
LAB_101601f70:
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_101601ec8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x198);
            FUN_1015efcec();
            goto LAB_101601f70;
          }
          if (lVar1 != 5) goto LAB_101601ed8;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_101601ec8:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_101601ed8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101601f88; end: 1016020cb;  */

void FUN_101601f88(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_101602684();
    (*pcVar4)(&lStack_50,1,&UNK_1103e7e58,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_1016020cc(), unaff_x21 == 0)) {
      uVar2 = unaff_x20[7];
      uVar1 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,5,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1016020cc; end: 101602157;  */

void FUN_1016020cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x68);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015efcec();
    (*pcVar1)(&uStack_60,4,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101602158; end: 1016021b7;  */

uint FUN_101602158(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_101602734;
    }
    else if (lVar4 == 1) {
      if (lVar3 == 1) {
LAB_101602734:
        uVar7 = param_1[2];
        if ((uVar7 == param_2[2] && param_1[3] == param_2[3]) ||
           (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
          uVar7 = param_1[4];
          if (((uVar7 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
            lVar4 = param_1[0xb];
            lVar3 = param_1[10];
            uVar9 = param_1[0xd];
            uVar7 = param_1[0xc];
            lVar6 = param_2[0xb];
            lVar5 = param_2[10];
            uVar10 = param_2[0xd];
            uVar8 = param_2[0xc];
            lStack_a0 = lVar5;
            lStack_98 = lVar6;
            uStack_90 = uVar8;
            uStack_88 = uVar10;
            lStack_80 = lVar3;
            lStack_78 = lVar4;
            uStack_70 = uVar7;
            uStack_68 = uVar9;
            if (uVar9 >> 0x3c < 0xf) {
              if (0xe < uVar10 >> 0x3c) goto LAB_10160281c;
              if (lVar3 == lVar5) {
                if ((int)lVar4 == (int)lVar6) {
                  FUN_1015fefbc(&lStack_80,auStack_c0);
                  FUN_1015fefbc(&lStack_a0,auStack_c0);
                  uVar2 = uVar7;
                  FUN_100e25fcc(uVar7,uVar9,uVar8,uVar10);
                  FUN_1015d38c8(lVar3,lVar6,uVar8,uVar10);
                  if ((uVar2 & 1) != 0) goto LAB_1016027c8;
                  goto LAB_101602904;
                }
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
                lVar5 = lVar3;
              }
              else {
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
              }
              FUN_1015d38c8(lVar5,lVar6,uVar8,uVar10);
            }
            else {
              if (0xe < uVar10 >> 0x3c) {
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
LAB_1016027c8:
                FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
                uVar7 = param_1[6];
                if (((uVar7 == param_2[6]) && (param_1[7] == param_2[7])) ||
                   (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
                  lVar3 = param_1[8];
                  FUN_100e25fcc(lVar3,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)lVar3;
                  goto LAB_10160290c;
                }
                goto LAB_101602908;
              }
LAB_10160281c:
              FUN_1015fefbc(&lStack_80,auStack_c0);
              FUN_1015fefbc(&lStack_a0,auStack_c0);
              FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
              lVar3 = lVar5;
              lVar4 = lVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
LAB_101602904:
            FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
          }
        }
      }
    }
    else if (lVar3 == 2) goto LAB_101602734;
  }
  else if (lVar3 == lVar4) goto LAB_101602734;
LAB_101602908:
  uVar1 = 0;
LAB_10160290c:
  return uVar1 & 1;
}



/* Entry: 1016021b8; end: 1016021e7;  */

undefined1  [16] FUN_1016021b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1016021e8; end: 10160221b;  */

void FUN_1016021e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 10160221c; end: 10160222f;  */

undefined1  [16] FUN_10160221c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x10160222c;
  return auVar1;
}



/* Entry: 101602230; end: 101602243;  */

void FUN_101602230(void)

{
  FUN_101601e50();
  return;
}



/* Entry: 101602244; end: 10160228b;  */

void FUN_101602244(void)

{
  FUN_101601f88();
  return;
}



/* Entry: 10160228c; end: 10160228f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10160228c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101602290; end: 1016022c7;  */

uint FUN_101602290(long param_1,long param_2)

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
  FUN_101603044();
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



/* Entry: 1016022c8; end: 10160232f;  */

uint FUN_1016022c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_1016026c4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101602330; end: 1016023cf;  */

/* WARNING: Possible PIC construction at 0x00010160237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010160238c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101602380) */
/* WARNING: Removing unreachable block (ram,0x000101602390) */

void FUN_101602330(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9848 != -1) {
    func_0x000107c61568(0x112db9848,FUN_101601e08);
  }
  uVar5 = uRam00000001138014c0;
  uVar4 = uRam00000001138014b8;
  uVar3 = uRam00000001138014b0;
  uVar2 = uRam00000001138014a8;
  uVar1 = uRam00000001138014a0;
  *param_1 = uRam0000000113801498;
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



/* Entry: 1016023d0; end: 10160240b;  */

void FUN_1016023d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db98a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db98a0,&UNK_10d96bd50);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10160240c; end: 101602537;  */

void FUN_10160240c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101602538; end: 1016025e3;  */

uint FUN_101602538(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1016026c4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1016025e4; end: 101602683;  */

/* WARNING: Possible PIC construction at 0x000101602630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101602640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101602634) */
/* WARNING: Removing unreachable block (ram,0x000101602644) */

void FUN_1016025e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9860 != -1) {
    func_0x000107c61568(0x112db9860,0x10160259c);
  }
  uVar5 = uRam00000001138014f0;
  uVar4 = uRam00000001138014e8;
  uVar3 = uRam00000001138014e0;
  uVar2 = uRam00000001138014d8;
  uVar1 = uRam00000001138014d0;
  *param_1 = uRam00000001138014c8;
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



/* Entry: 101602684; end: 1016026c3;  */

void FUN_101602684(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96bb00;
  func_0x000107c61520(&DAT_10d96bb00,&UNK_1103e7e58);
  puRam0000000112db9850 = puVar1;
  return;
}



/* Entry: 1016026c4; end: 10160292f;  */

uint FUN_1016026c4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_101602734;
    }
    else if (lVar4 == 1) {
      if (lVar3 == 1) {
LAB_101602734:
        uVar7 = param_1[2];
        if ((uVar7 == param_2[2] && param_1[3] == param_2[3]) ||
           (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
          uVar7 = param_1[4];
          if (((uVar7 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
            lVar4 = param_1[0xb];
            lVar3 = param_1[10];
            uVar9 = param_1[0xd];
            uVar7 = param_1[0xc];
            lVar6 = param_2[0xb];
            lVar5 = param_2[10];
            uVar10 = param_2[0xd];
            uVar8 = param_2[0xc];
            lStack_a0 = lVar5;
            lStack_98 = lVar6;
            uStack_90 = uVar8;
            uStack_88 = uVar10;
            lStack_80 = lVar3;
            lStack_78 = lVar4;
            uStack_70 = uVar7;
            uStack_68 = uVar9;
            if (uVar9 >> 0x3c < 0xf) {
              if (0xe < uVar10 >> 0x3c) goto LAB_10160281c;
              if (lVar3 == lVar5) {
                if ((int)lVar4 == (int)lVar6) {
                  FUN_1015fefbc(&lStack_80,auStack_c0);
                  FUN_1015fefbc(&lStack_a0,auStack_c0);
                  uVar2 = uVar7;
                  FUN_100e25fcc(uVar7,uVar9,uVar8,uVar10);
                  FUN_1015d38c8(lVar3,lVar6,uVar8,uVar10);
                  if ((uVar2 & 1) != 0) goto LAB_1016027c8;
                  goto LAB_101602904;
                }
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
                lVar5 = lVar3;
              }
              else {
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
              }
              FUN_1015d38c8(lVar5,lVar6,uVar8,uVar10);
            }
            else {
              if (0xe < uVar10 >> 0x3c) {
                FUN_1015fefbc(&lStack_80,auStack_c0);
                FUN_1015fefbc(&lStack_a0,auStack_c0);
LAB_1016027c8:
                FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
                uVar7 = param_1[6];
                if (((uVar7 == param_2[6]) && (param_1[7] == param_2[7])) ||
                   (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
                  lVar3 = param_1[8];
                  FUN_100e25fcc(lVar3,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)lVar3;
                  goto LAB_10160290c;
                }
                goto LAB_101602908;
              }
LAB_10160281c:
              FUN_1015fefbc(&lStack_80,auStack_c0);
              FUN_1015fefbc(&lStack_a0,auStack_c0);
              FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
              lVar3 = lVar5;
              lVar4 = lVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
LAB_101602904:
            FUN_1015d38c8(lVar3,lVar4,uVar7,uVar9);
          }
        }
      }
    }
    else if (lVar3 == 2) goto LAB_101602734;
  }
  else if (lVar3 == lVar4) goto LAB_101602734;
LAB_101602908:
  uVar1 = 0;
LAB_10160290c:
  return uVar1 & 1;
}



/* Entry: 101602930; end: 10160296f;  */

void FUN_101602930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bc70;
  func_0x000107c61520(&UNK_10d96bc70,&UNK_1103e7db0);
  puRam0000000112db9858 = puVar1;
  return;
}



/* Entry: 101602970; end: 101602983;  */

void FUN_101602970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101602984();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016029c4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101602984; end: 101602a03;  */

void FUN_101602984(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bb98;
  func_0x000107c61520(&UNK_10d96bb98,&UNK_1103e7e58);
  puRam0000000112db9868 = puVar1;
  return;
}



/* Entry: 101602a04; end: 101602a07;  */

void FUN_101602a04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db9878 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db9880;
  func_0x00010002969c(0x112db9880,&UNK_10d96bb20);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db9878 = puVar2;
  return;
}



/* Entry: 101602a08; end: 101602a57;  */

void FUN_101602a08(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db9878 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db9880;
  func_0x00010002969c(0x112db9880,&UNK_10d96bb20);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db9878 = puVar2;
  return;
}



/* Entry: 101602a58; end: 101602a5b;  */

void FUN_101602a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bbd8;
  func_0x000107c61520(&UNK_10d96bbd8,&UNK_1103e7e58);
  puRam0000000112db9888 = puVar1;
  return;
}



/* Entry: 101602a5c; end: 101602a9b;  */

void FUN_101602a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bbd8;
  func_0x000107c61520(&UNK_10d96bbd8,&UNK_1103e7e58);
  puRam0000000112db9888 = puVar1;
  return;
}



/* Entry: 101602a9c; end: 101602abf;  */

void FUN_101602a9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101602ac0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101602ac0; end: 101602aff;  */

void FUN_101602ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bc48;
  func_0x000107c61520(&UNK_10d96bc48,&UNK_1103e7db0);
  puRam0000000112db9890 = puVar1;
  return;
}



/* Entry: 101602b00; end: 101602b13;  */

void FUN_101602b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101602930();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015fdf2c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101602b14; end: 101602b43;  */

void FUN_101602b14(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101602b44; end: 101602b47;  */

void FUN_101602b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bcb0;
  func_0x000107c61520(&UNK_10d96bcb0,&UNK_1103e7db0);
  puRam0000000112db9898 = puVar1;
  return;
}



/* Entry: 101602b48; end: 101602b87;  */

void FUN_101602b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96bcb0;
  func_0x000107c61520(&UNK_10d96bcb0,&UNK_1103e7db0);
  puRam0000000112db9898 = puVar1;
  return;
}



/* Entry: 101602b88; end: 101602c0f;  */

long FUN_101602b88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101602c10; end: 101602cd3;  */

undefined8 * FUN_101602c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar2 = param_2[8];
  uVar1 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar2,uVar1);
  param_1[8] = uVar2;
  param_1[9] = uVar1;
  uVar3 = param_2[0xd];
  if (uVar3 >> 0x3c < 0xf) {
    param_1[10] = param_2[10];
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
  }
  return param_1;
}



/* Entry: 101602cd4; end: 101602e27;  */

undefined8 * FUN_101602cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[8];
  uVar4 = param_2[9];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[8];
  uVar1 = param_1[9];
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
      param_1[10] = param_2[10];
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar2 = param_2[0xc];
      uVar4 = param_2[0xd];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xc];
      uVar1 = param_1[0xd];
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_1015ef434(param_1 + 10);
      uVar4 = param_2[10];
      uVar3 = param_2[0xd];
      uVar2 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar2;
    }
  }
  else if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
    param_1[10] = param_2[10];
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  return param_1;
}



/* Entry: 101602e28; end: 101602eef;  */

undefined8 * FUN_101602e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[8];
  uVar1 = param_1[9];
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    uVar3 = param_2[0xd];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[10] = param_2[10];
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar2 = param_1[0xc];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_1015ef434(param_1 + 10);
  }
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 101602ef0; end: 101603043;  */

int FUN_101602ef0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101603044; end: 1016030cb;  */

void FUN_101603044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db98a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96bc1c;
  func_0x000107c61520(&DAT_10d96bc1c,&UNK_1103e7db0);
  puRam0000000112db98a8 = puVar1;
  return;
}



/* Entry: 1016030cc; end: 10160317f;  */

/* WARNING: Removing unreachable block (ram,0x00010160317c) */

void FUN_1016030cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015cabb8();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110679698,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101603180; end: 1016031db;  */

void FUN_101603180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1016031dc();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1016031dc; end: 101603263;  */

void FUN_1016031dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101603264; end: 1016032a7;  */

uint FUN_101603264(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  lVar9 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  lVar10 = param_2[4];
  uVar4 = param_2[6];
  uStack_110 = uVar6;
  uStack_108 = uVar8;
  lStack_100 = lVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  uStack_d8 = uVar7;
  lStack_d0 = lVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (lVar9 == 0) {
    if (lVar10 != 0) goto LAB_10160373c;
    FUN_1015c999c(&uStack_e0,&uStack_90);
    FUN_1015c999c(&uStack_110,&uStack_90);
    FUN_101553bdc(uVar5,uVar7,0,uVar11,uVar3);
  }
  else {
    if (lVar10 == 0) {
LAB_10160373c:
      FUN_1015c999c(&uStack_e0,&uStack_90);
      FUN_1015c999c(&uStack_110,&uStack_90);
      FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
      FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
      uVar1 = 0;
      goto LAB_1016037d8;
    }
    uStack_88 = (undefined1)uVar8;
    uStack_b0 = (undefined1)uVar7;
    uStack_b8 = uVar5;
    lStack_a8 = lVar9;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_90 = uVar6;
    lStack_80 = lVar10;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    FUN_1015c999c(&uStack_e0,auStack_138);
    FUN_1015c999c(&uStack_110,auStack_138);
    puVar2 = &uStack_b8;
    func_0x00010368c758(puVar2,&uStack_90);
    FUN_101553bdc(uVar6,uVar8,lVar10,uVar12,uVar4);
    FUN_101553bdc(uVar5,uVar7,lVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1016037d8;
    }
  }
  uVar3 = *param_1;
  FUN_100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_1016037d8:
  return uVar1 & 1;
}



/* Entry: 1016032a8; end: 1016032d7;  */

undefined1  [16] FUN_1016032a8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1016032d8; end: 10160330b;  */

void FUN_1016032d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10160330c; end: 10160331f;  */

undefined8 FUN_10160330c(void)

{
  return 0x10160331c;
}



/* Entry: 101603320; end: 101603333;  */

void FUN_101603320(void)

{
  FUN_1016030cc();
  return;
}



/* Entry: 101603334; end: 101603373;  */

void FUN_101603334(void)

{
  FUN_101603180();
  return;
}



/* Entry: 101603374; end: 101603377;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101603374(undefined8 *param_1,undefined8 param_2,long param_3)

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


