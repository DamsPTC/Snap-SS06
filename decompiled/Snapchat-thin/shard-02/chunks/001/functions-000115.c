/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019a3bac; end: 1019a3e83;  */

undefined8 FUN_1019a3bac(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar1 = param_1[1];
  if (((uVar1 == param_2[1] && param_1[2] == param_2[2]) ||
      (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[3], uVar1 == param_2[3] && param_1[4] == param_2[4] ||
      (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[5];
    if ((((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
        (func_0x000107c605b8(), (uVar1 & 1) != 0)) && (param_1[7] == param_2[7])) {
      lVar2 = param_2[9];
      if (param_1[9] == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else {
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = param_1[8];
        if (((uVar1 != param_2[8]) || (param_1[9] != lVar2)) &&
           (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
          return 0;
        }
      }
      lVar2 = param_2[0xb];
      if (param_1[0xb] == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else {
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = param_1[10];
        if (((uVar1 != param_2[10]) || (param_1[0xb] != lVar2)) &&
           (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
          return 0;
        }
      }
      lVar2 = param_2[0xd];
      if (param_1[0xd] == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else {
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = param_1[0xc];
        if (((uVar1 != param_2[0xc]) || (param_1[0xd] != lVar2)) &&
           (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
          return 0;
        }
      }
      lVar2 = param_2[0xf];
      if (param_1[0xf] == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else {
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = param_1[0xe];
        if (((uVar1 != param_2[0xe]) || (param_1[0xf] != lVar2)) &&
           (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
          return 0;
        }
      }
      if (param_1[0x10] == param_2[0x10]) {
        lVar2 = param_2[0x12];
        if (param_1[0x12] == 0) {
          if (lVar2 != 0) {
            return 0;
          }
        }
        else {
          if (lVar2 == 0) {
            return 0;
          }
          uVar1 = param_1[0x11];
          if (((uVar1 != param_2[0x11]) || (param_1[0x12] != lVar2)) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
        }
        lVar2 = param_2[0x14];
        if (param_1[0x14] == 0) {
          if (lVar2 != 0) {
            return 0;
          }
        }
        else {
          if (lVar2 == 0) {
            return 0;
          }
          uVar1 = param_1[0x13];
          if (((uVar1 != param_2[0x13]) || (param_1[0x14] != lVar2)) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
        }
        lVar2 = param_2[0x16];
        if (param_1[0x16] == 0) {
          if (lVar2 != 0) {
            return 0;
          }
        }
        else {
          if (lVar2 == 0) {
            return 0;
          }
          uVar1 = param_1[0x15];
          if (((uVar1 != param_2[0x15]) || (param_1[0x16] != lVar2)) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
        }
        if ((((double)param_1[0x17] == (double)param_2[0x17]) && (param_1[0x18] == param_2[0x18]))
           && ((double)param_1[0x19] == (double)param_2[0x19])) {
          lVar2 = param_2[0x1b];
          if (param_1[0x1b] == 0) {
            if (lVar2 == 0) {
              return 1;
            }
          }
          else if ((lVar2 != 0) &&
                  (((uVar1 = param_1[0x1a], uVar1 == param_2[0x1a] && (param_1[0x1b] == lVar2)) ||
                   (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 1019a3e84; end: 1019a3e87;  */

void FUN_1019a3e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de12f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8c80;
  func_0x000107c61520(&UNK_10d9a8c80,&UNK_1104214d0);
  puRam0000000112de12f8 = puVar1;
  return;
}



/* Entry: 1019a3e88; end: 1019a3ec7;  */

void FUN_1019a3e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de12f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8c80;
  func_0x000107c61520(&UNK_10d9a8c80,&UNK_1104214d0);
  puRam0000000112de12f8 = puVar1;
  return;
}



/* Entry: 1019a3ec8; end: 1019a3f63;  */

long FUN_1019a3ec8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019a3f64; end: 1019a4083;  */

undefined8 * FUN_1019a3f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  uVar5 = param_2[6];
  param_1[6] = uVar5;
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  uVar9 = param_2[9];
  uVar1 = param_2[10];
  param_1[9] = uVar9;
  param_1[10] = uVar1;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  uVar2 = param_2[0xd];
  uVar10 = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar10;
  uVar6 = param_2[0xf];
  param_1[0xf] = uVar6;
  uVar10 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar10;
  uVar10 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar3;
  uVar3 = param_2[0x14];
  uVar4 = param_2[0x15];
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar4;
  uVar7 = param_2[0x16];
  param_1[0x16] = uVar7;
  uVar4 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar4;
  uVar4 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar4;
  uVar4 = param_2[0x1b];
  param_1[0x1b] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1019a4084; end: 1019a423f;  */

undefined8 * FUN_1019a4084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
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
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x13] = param_2[0x13];
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1019a4240; end: 1019a4343;  */

undefined8 * FUN_1019a4240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0x14];
  uVar2 = param_1[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x16];
  uVar2 = param_1[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  uVar1 = param_2[0x1b];
  uVar2 = param_1[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1019a4344; end: 1019a4413;  */

int FUN_1019a4344(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x38] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019a4414; end: 1019a46f3;  */

code * FUN_1019a4414(code *param_1,code *param_2,code *param_3)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_b0 [6];
  code *apcStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  apcStack_80[0] = param_1;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)apcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12_00;
  pcVar2 = (code *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  pcVar3 = pcVar2;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar7 = 9;
  pcVar4 = pcVar3;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(pcVar3);
  pcVar3 = pcVar4;
  lVar6 = lVar1;
  func_0x000107c5fc54(pcVar4,lVar1);
  func_0x000107c61170(pcVar4);
  if (*(long *)(pcVar3 + 0x10) == 0) {
    func_0x000107c6142c(pcVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0001019a4628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x38))(apcStack_80[0],1,1,lVar1);
      return apcStack_80[0];
    }
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (lVar11,pcVar3 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(pcVar3);
    (**(code **)(lVar8 + 0x20))(lVar10,lVar11,lVar1);
    func_0x000107c5ed98(lVar9,param_2,param_3,1);
    func_0x000107c415e0();
    func_0x000107c61180();
    pcVar3 = pcVar2;
    func_0x000107c5ed90();
    uStack_70 = 0;
    pcVar4 = pcVar2;
    func_0x000107c409e4();
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(pcVar3);
    uVar7 = uStack_70;
    if ((int)pcVar4 == 0) {
      uVar5 = uStack_70;
      func_0x000107c61174(uStack_70);
      func_0x000107c5ed30(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c614ac(uVar7);
    }
    else {
      func_0x000107c61174(uStack_70);
    }
    param_2 = apcStack_80[0];
    func_0x000107c5ed9c(apcStack_80[0],0xd000000000000019,0x800000010efc5ec0);
    param_3 = *(code **)(lVar8 + 8);
    (*param_3)(lVar9,lVar1);
    (*param_3)(lVar10,lVar1);
    lVar6 = 0;
    uVar7 = 1;
    pcVar3 = param_2;
    (**(code **)(lVar8 + 0x38))(param_2,0,1,lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pcVar3;
    }
  }
  func_0x000107c60e78();
  *(long *)(lVar10 + -0x30) = lVar1;
  *(code **)(lVar10 + -0x28) = param_2;
  *(code **)(lVar10 + -0x20) = param_3;
  *(long *)(lVar10 + -0x18) = lVar8;
  *(undefined1 **)(lVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar10 + -8) = FUN_1019a46f4;
  func_0x000107c613fc(param_3,0x20,7);
  FUN_1019a4748(pcVar3,lVar6,uVar7);
  return param_3;
}



/* Entry: 1019a46f4; end: 1019a4747;  */

undefined8 FUN_1019a46f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1019a4748(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1019a4748; end: 1019a49e7;  */

void FUN_1019a4748(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  
  lVar1 = 0x112d36580;
  uStack_6c = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  uVar3 = 0x112de1320;
  func_0x0001000285a8(0x112de1320,&UNK_10d9a8f20);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  FUN_1019a4414(puVar10,param_1,param_2);
  func_0x000107c6142c(param_2);
  puVar2 = puVar10;
  (**(code **)(lVar6 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010efc5e80);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000285a8(0x112de1328,&UNK_10d9a8f30);
    func_0x000107c613fc();
    pcVar12 = FUN_1019a4b74;
    func_0x0001000bdd8c(FUN_1019a4b74,0);
    func_0x000107c61170(puVar4);
  }
  else {
    pcVar12 = *(code **)(lVar6 + 0x20);
    (*pcVar12)(lVar7,puVar10,lVar1);
    (**(code **)(lVar6 + 0x10))(lVar8,lVar7,lVar1);
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar11 = uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1104215f8;
    func_0x000107c613fc(&UNK_1104215f8,uVar11 + lVar9,uVar5 | 7);
    puVar4[0x10] = (byte)uStack_6c & 1;
    (*pcVar12)(puVar4 + uVar11,lVar8,lVar1);
    uVar3 = 0x112de1328;
    func_0x0001000285a8(0x112de1328,&UNK_10d9a8f30);
    func_0x000107c613fc();
    pcVar12 = FUN_1019a4b7c;
    func_0x0001000bdd8c(FUN_1019a4b7c,puVar4,uVar3);
    (**(code **)(lVar6 + 8))(lVar7,lVar1);
  }
  *(code **)(unaff_x20 + 0x10) = pcVar12;
  return;
}



/* Entry: 1019a49e8; end: 1019a4b73;  */

/* WARNING: Removing unreachable block (ram,0x0001019a4b4c) */

void FUN_1019a49e8(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar1 = 0x112de13d8;
  func_0x0001000285a8(0x112de13d8,&UNK_10d9a9020);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_2 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_3,lVar2);
    func_0x000107c6159c(puVar3,lVar1,0);
    FUN_1019aa2ec(auStack_70,&UNK_1104217a8,&PTR_DAT_112de1498);
    func_0x0001000285a8(0x112de13e0,&UNK_10d9a9028);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar1,3);
    FUN_1019aa2ec(auStack_70,&UNK_1104217a8,&PTR_DAT_112de1498);
    func_0x0001000285a8(0x112de13e0,&UNK_10d9a9028);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 1019a4b74; end: 1019a4b7b;  */

void FUN_1019a4b74(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1019a4b7c; end: 1019a4bbb;  */

/* WARNING: Removing unreachable block (ram,0x0001019a4b4c) */

void FUN_1019a4b7c(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  lVar4 = 0x112de13d8;
  func_0x0001000285a8(0x112de13d8,&UNK_10d9a9020);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((bVar1 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))
              (puVar3,unaff_x20 + (uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6159c(puVar3,lVar4,0);
    FUN_1019aa2ec(auStack_70,&UNK_1104217a8,&PTR_DAT_112de1498);
    func_0x0001000285a8(0x112de13e0,&UNK_10d9a9028);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar4,3);
    FUN_1019aa2ec(auStack_70,&UNK_1104217a8,&PTR_DAT_112de1498);
    func_0x0001000285a8(0x112de13e0,&UNK_10d9a9028);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 1019a4bbc; end: 1019a4bd3;  */

void FUN_1019a4bbc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a4bd4,0,0);
  return;
}



/* Entry: 1019a4bd4; end: 1019a4dc7;  */

void FUN_1019a4bd4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar4 = PTR__swift_bridgeObjectRelease_11034f258;
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61438(uVar3,2);
      puVar5 = auStack_60;
      func_0x000100403b00(puVar5,uVar1,uVar3);
      func_0x000107c6142c(uStack_58);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        puVar6 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_1019a5bb4(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,puVar4);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_1019a5bb4(puVar8,uVar2 + 1,1,puVar7,puVar4);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      puVar12 = puVar12 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  func_0x000107c6142c(puVar9);
  if (*(long *)(puVar8 + 0x10) != 0) {
    func_0x0001000d224c(unaff_x22 + 0x10);
    lVar11 = *(long *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x28) = lVar11;
    if (lVar11 != 0) {
      puVar9 = &UNK_110421620;
      func_0x000107c613fc(&UNK_110421620,0x18,7);
      *(undefined **)(unaff_x22 + 0x30) = puVar9;
      *(undefined **)(puVar9 + 0x10) = puVar8;
      plVar10 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x38) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_1019a4dc8;
      plVar10[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
      plVar10[0xc] = lVar11;
      plVar10[9] = (long)FUN_1019a5cc8;
      plVar10[10] = (long)puVar9;
      plVar10[8] = (long)plVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
      return;
    }
  }
  func_0x000107c6142c(puVar8);
                    /* WARNING: Could not recover jumptable at 0x0001019a4dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a4dc8; end: 1019a4e2b;  */

void FUN_1019a4dc8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0x1019a61dc;
  }
  else {
    uVar1 = 0x1019a61e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1019a4e2c; end: 1019a4e43;  */

void FUN_1019a4e2c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a4e44,0,0);
  return;
}



/* Entry: 1019a4e44; end: 1019a4eef;  */

void FUN_1019a4e44(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar1;
    lVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1019a4ef0;
    plVar1[0xb] = lVar2;
    plVar1[0xc] = lVar3;
    plVar1[9] = (long)FUN_1019a4fb8;
    plVar1[10] = 0;
    plVar1[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a4eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1019a4ef0; end: 1019a4fb7;  */

void FUN_1019a4ef0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    uVar1 = 0x1019a4f4c;
  }
  else {
    uVar1 = 0x1019a4f84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1019a4fb8; end: 1019a50c3;  */

void FUN_1019a4fb8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_1019a6220();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (unaff_x21 == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 == 0) {
      func_0x000107c6142c();
      *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000100403514(0,lVar6,0);
      puVar7 = (undefined8 *)(param_2 + 0x28);
      do {
        uVar1 = puVar7[-1];
        uVar3 = *puVar7;
        uVar2 = *(ulong *)(puVar5 + 0x10);
        uVar4 = *(ulong *)(puVar5 + 0x18);
        func_0x000107c61434(uVar3);
        if (uVar4 >> 1 <= uVar2) {
          func_0x000100403514(1 < uVar4,uVar2 + 1,1);
        }
        puVar7 = puVar7 + 2;
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      func_0x000107c6142c(param_2);
      *param_1 = puVar5;
    }
  }
  return;
}



/* Entry: 1019a50c4; end: 1019a50df;  */

void FUN_1019a50c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a50e0,0,0);
  return;
}



/* Entry: 1019a50e0; end: 1019a51bb;  */

void FUN_1019a50e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x38) = lVar6;
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar3 = &UNK_110421648;
    func_0x000107c613fc(&UNK_110421648,0x20,7);
    *(undefined **)(unaff_x22 + 0x40) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    plVar4 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    lVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1019a51bc;
    plVar4[0xb] = lVar5;
    plVar4[0xc] = lVar6;
    plVar4[9] = (long)FUN_1019a6010;
    plVar4[10] = (long)puVar3;
    plVar4[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a51b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1019a51bc; end: 1019a521f;  */

void FUN_1019a51bc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1019a5220;
  }
  else {
    pcVar2 = (code *)0x1019a5258;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1019a5220; end: 1019a528b;  */

void FUN_1019a5220(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001019a5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 1019a528c; end: 1019a52a3;  */

void FUN_1019a528c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a52a4,0,0);
  return;
}



/* Entry: 1019a52a4; end: 1019a537f;  */

void FUN_1019a52a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x18) + 0x10) != 0) {
    func_0x0001000d224c(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x28) = lVar3;
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
      puVar1 = &UNK_110421670;
      func_0x000107c613fc(&UNK_110421670,0x18,7);
      *(undefined **)(unaff_x22 + 0x30) = puVar1;
      *(undefined8 *)(puVar1 + 0x10) = uVar2;
      plVar4 = (long *)0x70;
      func_0x000107c61434(uVar2);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x38) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1019a5380;
      plVar4[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
      plVar4[0xc] = lVar3;
      plVar4[9] = (long)FUN_1019a6140;
      plVar4[10] = (long)puVar1;
      plVar4[8] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a5380; end: 1019a53e3;  */

void FUN_1019a5380(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1019a53e4;
  }
  else {
    pcVar2 = (code *)0x1019a61e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1019a53e4; end: 1019a5417;  */

void FUN_1019a53e4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001019a5414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a5418; end: 1019a542f;  */

void FUN_1019a5418(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a5430,0,0);
  return;
}



/* Entry: 1019a5430; end: 1019a54fb;  */

void FUN_1019a5430(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar1 = &UNK_110421698;
    func_0x000107c613fc(&UNK_110421698,0x18,7);
    *(undefined **)(unaff_x22 + 0x30) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    plVar4 = (long *)0x70;
    func_0x000107c61434(uVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1019a54fc;
    plVar4[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar4[0xc] = lVar3;
    plVar4[9] = (long)FUN_1019a6168;
    plVar4[10] = (long)puVar1;
    plVar4[8] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a54f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a54fc; end: 1019a555f;  */

void FUN_1019a54fc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1019a5560;
  }
  else {
    pcVar2 = FUN_1019a55a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1019a5560; end: 1019a559f;  */

void FUN_1019a5560(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001019a559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a55a0; end: 1019a55d3;  */

void FUN_1019a55a0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001019a55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a55d4; end: 1019a55eb;  */

void FUN_1019a55d4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a55ec,0,0);
  return;
}



/* Entry: 1019a55ec; end: 1019a56d7;  */

void FUN_1019a55ec(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x1019a567c;
    plVar1[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar1[0xc] = lVar2;
    plVar1[9] = (long)FUN_1019a574c;
    plVar1[10] = 0;
    plVar1[8] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a5678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a56d8; end: 1019a5717;  */

void FUN_1019a56d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001019a5714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a5718; end: 1019a574b;  */

void FUN_1019a5718(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001019a5748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019a574c; end: 1019a576b;  */

void FUN_1019a574c(void)

{
  FUN_1019a6e8c();
  return;
}



/* Entry: 1019a576c; end: 1019a5783;  */

void FUN_1019a576c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a5784,0,0);
  return;
}



/* Entry: 1019a5784; end: 1019a5877;  */

void FUN_1019a5784(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x1019a581c;
    plVar1[0xb] = (long)PTR___sSiN_11034deb0;
    plVar1[0xc] = lVar2;
    plVar1[9] = (long)FUN_1019a5878;
    plVar1[10] = 0;
    plVar1[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019a5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1019a5878; end: 1019a58cf;  */

void FUN_1019a5878(undefined8 *param_1,long param_2)

{
  long unaff_x21;
  undefined8 uVar1;
  
  FUN_1019a6aa4();
  if (unaff_x21 == 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
    }
    func_0x000107c6142c();
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 1019a58d0; end: 1019a58fb;  */

void FUN_1019a58d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019a58fc; end: 1019a5907;  */

void FUN_1019a58fc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 1019a5908; end: 1019a5957;  */

void FUN_1019a5908(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019a61c8;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a4bd4,0,0);
  return;
}



/* Entry: 1019a5958; end: 1019a599f;  */

void FUN_1019a5958(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019a59a0;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a4e44,0,0);
  return;
}



/* Entry: 1019a59a0; end: 1019a59e7;  */

void FUN_1019a59a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019a59e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019a59e8; end: 1019a5a47;  */

void FUN_1019a59e8(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019a61d4;
  plVar1[5] = param_2;
  plVar1[6] = lVar2;
  plVar1[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a50e0,0,0);
  return;
}



/* Entry: 1019a5a48; end: 1019a5a97;  */

void FUN_1019a5a48(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1019a61cc;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a52a4,0,0);
  return;
}



/* Entry: 1019a5a98; end: 1019a5ae7;  */

void FUN_1019a5a98(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019a5ae8;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019a5430,0,0);
  return;
}



/* Entry: 1019a5ae8; end: 1019a5bb3;  */

void FUN_1019a5ae8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019a5b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019a5bb4; end: 1019a5cc7;  */

undefined *
FUN_1019a5bb4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019a5cc8);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1019a5cc8; end: 1019a600f;  */

void FUN_1019a5cc8(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  
  lVar17 = *(long *)(unaff_x20 + 0x10);
  FUN_1019a6220();
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (unaff_x21 == 0) {
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar19 == 0) {
      func_0x000107c6142c(param_1);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000100403514(0,lVar19,0);
      lVar12 = 0;
      uVar16 = *(ulong *)(puVar18 + 0x10);
      uVar10 = uVar16;
      do {
        uVar2 = *(undefined8 *)(param_1 + lVar12 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + lVar12 + 0x28);
        uVar14 = *(ulong *)(puVar18 + 0x18);
        uVar8 = uVar10 + 1;
        func_0x000107c61434(uVar3);
        if (uVar14 >> 1 <= uVar10) {
          func_0x000100403514(1 < uVar14,uVar8,1);
        }
        *(ulong *)(puVar18 + 0x10) = uVar8;
        lVar15 = lVar12 + uVar16 * 0x10;
        *(undefined8 *)(puVar18 + lVar15 + 0x20) = uVar2;
        *(undefined8 *)(puVar18 + lVar15 + 0x28) = uVar3;
        lVar12 = lVar12 + 0x10;
        lVar19 = lVar19 + -1;
        uVar10 = uVar8;
      } while (lVar19 != 0);
      func_0x000107c6142c(param_1);
    }
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    uVar10 = *(ulong *)(puVar18 + 0x10);
    if (uVar10 == 0) {
      lVar19 = 0;
    }
    else {
      uVar16 = 0;
      puVar13 = (ulong *)(puVar18 + 0x28);
      do {
        if (*(ulong *)(puVar18 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a5ff4);
          (*pcVar5)();
        }
        uVar8 = puVar13[-1];
        uVar14 = *puVar13;
        func_0x000107c61434(uVar14);
        puVar6 = puVar4;
        func_0x000107c61558();
        uVar7 = uVar8;
        uVar9 = uVar14;
        func_0x000100029284();
        uVar11 = (ulong)~(uint)uVar9 & 1;
        lVar19 = *(long *)(puVar4 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(puVar4 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a5ff8);
          (*pcVar5)();
        }
        if (*(long *)(puVar4 + 0x18) < lVar19) {
          func_0x00010143a4f4(lVar19,puVar6);
          uVar7 = uVar8;
          uVar11 = uVar14;
          func_0x000100029284();
          if (((uint)uVar9 & 1) != ((uint)uVar11 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a6010);
            (*pcVar5)();
          }
LAB_1019a5ea0:
          if ((uVar9 & 1) == 0) goto LAB_1019a5ea4;
LAB_1019a5de4:
          *(ulong *)(*(long *)(puVar4 + 0x38) + uVar7 * 8) = uVar16;
          func_0x000107c6142c(uVar14);
        }
        else {
          if (((ulong)puVar6 & 1) != 0) goto LAB_1019a5ea0;
          func_0x00010143a38c();
          if ((uVar9 & 1) != 0) goto LAB_1019a5de4;
LAB_1019a5ea4:
          *(ulong *)(puVar4 + (uVar7 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar4 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar7 * 0x10);
          *puVar1 = uVar8;
          puVar1[1] = uVar14;
          *(ulong *)(*(long *)(puVar4 + 0x38) + uVar7 * 8) = uVar16;
          if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a5ffc);
            (*pcVar5)();
          }
          *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        }
        uVar16 = uVar16 + 1;
        puVar13 = puVar13 + 2;
      } while (uVar10 != uVar16);
      lVar19 = *(long *)(puVar18 + 0x10);
    }
    func_0x000107c6142c(puVar18);
    lVar12 = *(long *)(lVar17 + 0x10);
    if (lVar12 != 0) {
      puVar13 = (ulong *)(lVar17 + 0x28);
      do {
        uVar10 = puVar13[-1];
        uVar16 = *puVar13;
        lVar17 = *(long *)(puVar4 + 0x10);
        func_0x000107c61434(uVar16);
        if (lVar17 == 0) {
LAB_1019a5f80:
          lVar17 = lVar19 + 1;
          lVar15 = lVar19;
          if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1019a6000);
            (*pcVar5)();
          }
        }
        else {
          func_0x000107c61434(puVar4);
          uVar8 = uVar10;
          uVar14 = uVar16;
          func_0x000100029284();
          if ((uVar14 & 1) == 0) {
            func_0x000107c6142c(puVar4);
            goto LAB_1019a5f80;
          }
          lVar15 = *(long *)(*(long *)(puVar4 + 0x38) + uVar8 * 8);
          func_0x000107c6142c(puVar4);
          lVar17 = lVar19;
        }
        FUN_1019a6fa0(uVar10,uVar16,lVar15);
        func_0x000107c6142c(uVar16);
        puVar13 = puVar13 + 2;
        lVar12 = lVar12 + -1;
        lVar19 = lVar17;
      } while (lVar12 != 0);
    }
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 1019a6010; end: 1019a613f;  */

void FUN_1019a6010(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  FUN_1019a663c(lVar6,*(undefined8 *)(unaff_x20 + 0x18));
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (unaff_x21 == 0) {
    lVar10 = *(long *)(lVar6 + 0x10);
    if (lVar10 == 0) {
      func_0x000107c6142c(lVar6);
      *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000100403514(0,lVar10,0);
      lVar11 = 0;
      uVar8 = *(ulong *)(puVar5 + 0x10);
      uVar9 = uVar8;
      do {
        uVar2 = *(undefined8 *)(lVar6 + lVar11 + 0x20);
        uVar3 = *(undefined8 *)(lVar6 + lVar11 + 0x28);
        uVar7 = *(ulong *)(puVar5 + 0x18);
        uVar1 = uVar9 + 1;
        func_0x000107c61434(uVar3);
        if (uVar7 >> 1 <= uVar9) {
          func_0x000100403514(1 < uVar7,uVar1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1;
        lVar4 = lVar11 + uVar8 * 0x10;
        *(undefined8 *)(puVar5 + lVar4 + 0x20) = uVar2;
        *(undefined8 *)(puVar5 + lVar4 + 0x28) = uVar3;
        lVar11 = lVar11 + 0x10;
        lVar10 = lVar10 + -1;
        uVar9 = uVar1;
      } while (lVar10 != 0);
      func_0x000107c6142c(lVar6);
      *param_1 = puVar5;
    }
  }
  return;
}



/* Entry: 1019a6140; end: 1019a6167;  */

void FUN_1019a6140(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019a7124(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019a6168; end: 1019a61a3;  */

void FUN_1019a6168(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + 0x10) == 0) {
    FUN_1019a6e8c(param_1);
  }
  else {
    FUN_1019a6f84();
  }
  return;
}



/* Entry: 1019a61a4; end: 1019a61c3;  */

void FUN_1019a61a4(void)

{
  func_0x000107c61168(&PTR_PTR_112de1370);
  return;
}



/* Entry: 1019a61c4; end: 1019a621f;  */

void FUN_1019a61c4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001019a4f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 1019a6220; end: 1019a663b;  */

/* WARNING: Removing unreachable block (ram,0x0001019a65dc) */
/* WARNING: Removing unreachable block (ram,0x0001019a65ac) */
/* WARNING: Removing unreachable block (ram,0x0001019a660c) */

undefined * FUN_1019a6220(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined *unaff_x23;
  code *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar2 = unaff_x20;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar2,0,0);
    func_0x000107c61654();
  }
  else {
    unaff_x23 = *(undefined **)(unaff_x20 + 8);
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uStack_98 = 0xd00000000000003a;
    uStack_90 = 0x800000010efc5ee0;
    uStack_88 = 0x2259aa51;
    uStack_80 = 0;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar2;
    uStack_70 = uVar4;
    func_0x000107c614f0(lVar2);
    (**(code **)(unaff_x23 + 8))(&uStack_c0,&uStack_98,lVar3,unaff_x23);
    if (unaff_x21 == 0) {
      lStack_118 = lVar2;
      FUN_10199e888(&uStack_c0,&uStack_110);
      unaff_x23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_f8 != 0) {
        FUN_10199e8d8(&uStack_110,auStack_e8);
        lVar3 = lStack_c8;
        lVar2 = lStack_d0;
        func_0x0001000a8868(auStack_e8,lStack_d0);
        uVar4 = 0;
        pcVar11 = FUN_1019a7c5c;
        (**(code **)(lVar3 + 0x30))(0,FUN_1019a7c5c,0,lVar2,lVar3);
        puVar5 = unaff_x23;
        func_0x000107c61558();
        puVar8 = unaff_x23;
        if (((ulong)puVar5 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1019a737c(0,*(long *)(unaff_x23 + 0x10) + 1,1,unaff_x23,0x112de14d0,&UNK_10d9a90e0,
                        &UNK_110421a90);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        unaff_x23 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          unaff_x23 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1019a737c(unaff_x23,uVar1 + 1,1,puVar8,0x112de14d0,&UNK_10d9a90e0,&UNK_110421a90);
        }
        lVar3 = lStack_c8;
        lVar2 = lStack_d0;
        *(ulong *)(unaff_x23 + 0x10) = uVar1 + 1;
        *(undefined8 *)(unaff_x23 + uVar1 * 0x10 + 0x20) = uVar4;
        *(code **)(unaff_x23 + uVar1 * 0x10 + 0x28) = pcVar11;
        func_0x0001000c6518(auStack_e8,lStack_d0);
        pcVar11 = *(code **)(lVar3 + 8);
        lVar6 = 0;
        func_0x000107c60188(0,lVar2);
        lVar10 = *(long *)(lVar6 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar12 = auStack_120 + -extraout_x8;
        (*pcVar11)(puVar12,lVar2,lVar3);
        lVar9 = *(long *)(lVar2 + -8);
        puVar7 = puVar12;
        (**(code **)(lVar9 + 0x30))(puVar12,1,lVar2);
        if ((int)puVar7 == 1) {
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
          (**(code **)(lVar10 + 8))(puVar12,lVar6);
          lStack_f0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          lStack_f8 = lVar2;
          lStack_f0 = lVar3;
          func_0x0001000c5db4(&uStack_110);
          (**(code **)(lVar9 + 0x20))();
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
        }
        uStack_b8 = uStack_108;
        uStack_c0 = uStack_110;
        lStack_a8 = lStack_f8;
        uStack_b0 = uStack_100;
        lStack_a0 = lStack_f0;
        func_0x0001000834e4(auStack_e8);
        FUN_10199e888(&uStack_c0,&uStack_110);
      }
      FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(lStack_118);
      FUN_1019a7754(&uStack_110,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(lVar2);
    }
  }
  return unaff_x23;
}



/* Entry: 1019a663c; end: 1019a6aa3;  */

/* WARNING: Removing unreachable block (ram,0x0001019a6a44) */
/* WARNING: Removing unreachable block (ram,0x0001019a6a14) */
/* WARNING: Removing unreachable block (ram,0x0001019a6a74) */

undefined * FUN_1019a663c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  undefined *unaff_x20;
  long lVar11;
  long unaff_x21;
  code *pcVar12;
  undefined1 *puVar13;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar3 = unaff_x20;
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,puVar3,0,0);
    func_0x000107c61654();
  }
  else {
    unaff_x20 = *(undefined **)(unaff_x20 + 8);
    lVar4 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = param_1;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = param_2;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined1 *)(lVar4 + 0x48) = 0;
    uVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uStack_98 = 0xd000000000000080;
    uStack_90 = 0x800000010efc5f20;
    uStack_88 = 0x3ec416f3;
    uStack_80 = 0;
    puVar9 = puVar3;
    lStack_78 = lVar4;
    uStack_70 = uVar5;
    func_0x000107c614f0(puVar3);
    (**(code **)(unaff_x20 + 8))(&uStack_c0,&uStack_98,puVar9,unaff_x20);
    func_0x000107c61574(lVar4);
    if (unaff_x21 == 0) {
      puStack_118 = puVar3;
      FUN_10199e888(&uStack_c0,&uStack_110);
      unaff_x20 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_f8 != 0) {
        FUN_10199e8d8(&uStack_110,auStack_e8);
        lVar2 = lStack_c8;
        lVar4 = lStack_d0;
        func_0x0001000a8868(auStack_e8,lStack_d0);
        uVar6 = 0;
        uVar5 = 0x1019a7c24;
        (**(code **)(lVar2 + 0x30))(0,0x1019a7c24,0,lVar4,lVar2);
        puVar3 = unaff_x20;
        func_0x000107c61558();
        puVar9 = unaff_x20;
        if (((ulong)puVar3 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_1019a737c(0,*(long *)(unaff_x20 + 0x10) + 1,1,unaff_x20,0x112de14c8,&UNK_10d9a90d8,
                        &UNK_110421a10);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        unaff_x20 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          unaff_x20 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1019a737c(unaff_x20,uVar1 + 1,1,puVar9,0x112de14c8,&UNK_10d9a90d8,&UNK_110421a10);
        }
        lVar2 = lStack_c8;
        lVar4 = lStack_d0;
        *(ulong *)(unaff_x20 + 0x10) = uVar1 + 1;
        *(undefined8 *)(unaff_x20 + uVar1 * 0x10 + 0x20) = uVar6;
        *(undefined8 *)(unaff_x20 + uVar1 * 0x10 + 0x28) = uVar5;
        func_0x0001000c6518(auStack_e8,lStack_d0);
        pcVar12 = *(code **)(lVar2 + 8);
        lVar7 = 0;
        func_0x000107c60188(0,lVar4);
        lVar10 = *(long *)(lVar7 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar13 = auStack_120 + -extraout_x8;
        (*pcVar12)(puVar13,lVar4,lVar2);
        lVar11 = *(long *)(lVar4 + -8);
        puVar8 = puVar13;
        (**(code **)(lVar11 + 0x30))(puVar13,1,lVar4);
        if ((int)puVar8 == 1) {
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
          (**(code **)(lVar10 + 8))(puVar13,lVar7);
          lStack_f0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          lStack_f8 = lVar4;
          lStack_f0 = lVar2;
          func_0x0001000c5db4(&uStack_110);
          (**(code **)(lVar11 + 0x20))();
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
        }
        uStack_b8 = uStack_108;
        uStack_c0 = uStack_110;
        lStack_a8 = lStack_f8;
        uStack_b0 = uStack_100;
        lStack_a0 = lStack_f0;
        func_0x0001000834e4(auStack_e8);
        FUN_10199e888(&uStack_c0,&uStack_110);
      }
      FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(puStack_118);
      FUN_1019a7754(&uStack_110,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(puVar3);
    }
  }
  return unaff_x20;
}



/* Entry: 1019a6aa4; end: 1019a6e8b;  */

/* WARNING: Removing unreachable block (ram,0x0001019a6e2c) */
/* WARNING: Removing unreachable block (ram,0x0001019a6dfc) */
/* WARNING: Removing unreachable block (ram,0x0001019a6e5c) */

undefined * FUN_1019a6aa4(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined *unaff_x23;
  code *pcVar11;
  undefined1 *puVar12;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar2 = unaff_x20;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar2,0,0);
    func_0x000107c61654();
  }
  else {
    unaff_x23 = *(undefined **)(unaff_x20 + 8);
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uStack_98 = 0xd000000000000023;
    uStack_90 = 0x800000010efc5fb0;
    uStack_88 = 0xffffffffe9d2e212;
    uStack_80 = 0;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar2;
    uStack_70 = uVar4;
    func_0x000107c614f0(lVar2);
    (**(code **)(unaff_x23 + 8))(&uStack_c0,&uStack_98,lVar3,unaff_x23);
    if (unaff_x21 == 0) {
      lStack_118 = lVar2;
      FUN_10199e888(&uStack_c0,&uStack_110);
      unaff_x23 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (lStack_f8 != 0) {
        FUN_10199e8d8(&uStack_110,auStack_e8);
        lVar3 = lStack_c8;
        lVar2 = lStack_d0;
        func_0x0001000a8868(auStack_e8,lStack_d0);
        uVar4 = 0;
        (**(code **)(lVar3 + 0x10))(0,0x1019a7ac4,0,lVar2,lVar3);
        puVar5 = unaff_x23;
        func_0x000107c61558();
        puVar8 = unaff_x23;
        if (((ulong)puVar5 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1019a7484(0,*(long *)(unaff_x23 + 0x10) + 1,1,unaff_x23);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        unaff_x23 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          unaff_x23 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1019a7484(unaff_x23,uVar1 + 1,1,puVar8);
        }
        lVar3 = lStack_c8;
        lVar2 = lStack_d0;
        *(ulong *)(unaff_x23 + 0x10) = uVar1 + 1;
        *(undefined8 *)(unaff_x23 + uVar1 * 8 + 0x20) = uVar4;
        func_0x0001000c6518(auStack_e8,lStack_d0);
        pcVar11 = *(code **)(lVar3 + 8);
        lVar6 = 0;
        func_0x000107c60188(0,lVar2);
        lVar10 = *(long *)(lVar6 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar12 = auStack_120 + -extraout_x8;
        (*pcVar11)(puVar12,lVar2,lVar3);
        lVar9 = *(long *)(lVar2 + -8);
        puVar7 = puVar12;
        (**(code **)(lVar9 + 0x30))(puVar12,1,lVar2);
        if ((int)puVar7 == 1) {
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
          (**(code **)(lVar10 + 8))(puVar12,lVar6);
          lStack_f0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          lStack_f8 = lVar2;
          lStack_f0 = lVar3;
          func_0x0001000c5db4(&uStack_110);
          (**(code **)(lVar9 + 0x20))();
          FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
        }
        uStack_b8 = uStack_108;
        uStack_c0 = uStack_110;
        lStack_a8 = lStack_f8;
        uStack_b0 = uStack_100;
        lStack_a0 = lStack_f0;
        func_0x0001000834e4(auStack_e8);
        FUN_10199e888(&uStack_c0,&uStack_110);
      }
      FUN_1019a7754(&uStack_c0,0x112de1128,&UNK_10d9a87b0);
      func_0x000107c615e8(lStack_118);
      FUN_1019a7754(&uStack_110,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c615e8(lVar2);
    }
  }
  return unaff_x23;
}



/* Entry: 1019a6e8c; end: 1019a6f83;  */

void FUN_1019a6e8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 8);
    uStack_60 = 0xd00000000000001a;
    uStack_58 = 0x800000010efc5fe0;
    uStack_50 = 0xffffffffea9e17f6;
    uStack_48 = 0x100;
    puStack_40 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(auStack_88,&uStack_60,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    if (unaff_x21 == 0) {
      FUN_1019a7754(auStack_88,0x112de1128,&UNK_10d9a87b0);
    }
  }
  return;
}



/* Entry: 1019a6f84; end: 1019a6f9f;  */

void FUN_1019a6f84(undefined8 param_1)

{
  FUN_1019a7140(param_1,FUN_1019a7584);
  return;
}



/* Entry: 1019a6fa0; end: 1019a7123;  */

void FUN_1019a6fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar2 = 0x112de1130;
    func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined1 *)(lVar2 + 0x30) = 2;
    *(undefined8 *)(lVar2 + 0x38) = param_3;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined1 *)(lVar2 + 0x48) = 0;
    uStack_80 = 0xd000000000000070;
    uStack_78 = 0x800000010efc6000;
    uStack_70 = 0xffffffffce07192f;
    uStack_68 = 0x100;
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = lVar1;
    lStack_60 = lVar2;
    func_0x000107c614f0(lVar1);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61434(param_2);
    (*pcVar5)(auStack_a8,&uStack_80,lVar3,lVar4);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(lVar2);
      FUN_1019a7754(auStack_a8,0x112de1128,&UNK_10d9a87b0);
    }
    else {
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1019a7124; end: 1019a713f;  */

void FUN_1019a7124(undefined8 param_1)

{
  FUN_1019a7140(param_1,FUN_1019a7794);
  return;
}



/* Entry: 1019a7140; end: 1019a72c3;  */

void FUN_1019a7140(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 auStack_d8 [5];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_10199e848();
    func_0x000107c613f8(&UNK_1104e5c48,lVar1,0,0);
    func_0x000107c61654();
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 8);
    (*param_2)(&uStack_b0,param_1);
    lVar2 = lVar1;
    func_0x000107c614f0(lVar1);
    (**(code **)(lVar6 + 8))(auStack_d8,&uStack_b0,lVar2,lVar6);
    if (unaff_x21 == 0) {
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      func_0x000100bcb1dc(&uStack_70);
      uStack_78 = uStack_90;
      FUN_1019a7754(&uStack_78,0x112de1170,&UNK_10d9a87c0);
      uStack_80 = uStack_88;
      FUN_1019a7754(&uStack_80,0x112d38270,&UNK_10d905a20);
      func_0x000107c615e8(lVar1);
      uVar4 = 0x112de1128;
      puVar5 = &UNK_10d9a87b0;
      puVar3 = auStack_d8;
    }
    else {
      func_0x000107c615e8(lVar1);
      uStack_48 = uStack_a8;
      uStack_50 = uStack_b0;
      func_0x000100bcb1dc(&uStack_50);
      uStack_38 = uStack_90;
      FUN_1019a7754(&uStack_38,0x112de1170,&UNK_10d9a87c0);
      uStack_58 = uStack_88;
      uVar4 = 0x112d38270;
      puVar5 = &UNK_10d905a20;
      puVar3 = &uStack_58;
    }
    FUN_1019a7754(puVar3,uVar4,puVar5);
  }
  return;
}



/* Entry: 1019a72c4; end: 1019a733b;  */

undefined8 FUN_1019a72c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112de13e8 != -1) {
    func_0x000107c61568(0x112de13e8,0x1019a61ec);
  }
  uVar2 = uRam0000000113803938;
  uVar1 = uRam0000000113803920;
  func_0x000107c61434(uRam0000000113803930);
  func_0x000107c61434(uVar2);
  return uVar1;
}



/* Entry: 1019a733c; end: 1019a737b;  */

void FUN_1019a733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61604();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1019a737c; end: 1019a7483;  */

undefined *
FUN_1019a737c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019a7484);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 1019a7484; end: 1019a7583;  */

undefined * FUN_1019a7484(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019a7584);
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
    puVar3 = (undefined *)0x112de14c0;
    func_0x0001000285a8(0x112de14c0,&UNK_10d9a90d0);
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
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
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



/* Entry: 1019a7584; end: 1019a7753;  */

void FUN_1019a7584(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  puVar5 = PTR___sSSN_11034da80;
  lVar11 = param_2;
  puVar9 = PTR___sSSN_11034da80;
  FUN_102211748();
  *(undefined **)(lVar6 + 0x38) = puVar5;
  lVar7 = lVar11;
  func_0x00010075bbf0();
  *(long *)(lVar6 + 0x40) = lVar7;
  *(long *)(lVar6 + 0x20) = lVar11;
  *(undefined **)(lVar6 + 0x28) = puVar9;
  uVar10 = 0x800000010efc60e0;
  uVar8 = 0xd000000000000035;
  func_0x000107c5fb00(0xd000000000000035,0x800000010efc60e0,lVar6);
  lVar6 = 0x112de1130;
  func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    FUN_1019a2848(0,lVar11,0);
    puVar12 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1019a2848(1 < uVar4,uVar2 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x28) = uVar3;
      puVar5[uVar2 * 0x18 + 0x30] = 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar6 + 0x20) = puVar5;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined1 *)(lVar6 + 0x30) = 4;
  *param_1 = uVar8;
  param_1[1] = uVar10;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  param_1[4] = lVar6;
  param_1[5] = puVar9;
  return;
}



/* Entry: 1019a7754; end: 1019a7793;  */

undefined8 FUN_1019a7754(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019a7794; end: 1019a7963;  */

void FUN_1019a7794(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar6 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  puVar5 = PTR___sSSN_11034da80;
  lVar11 = param_2;
  puVar9 = PTR___sSSN_11034da80;
  FUN_102211748();
  *(undefined **)(lVar6 + 0x38) = puVar5;
  lVar7 = lVar11;
  func_0x00010075bbf0();
  *(long *)(lVar6 + 0x40) = lVar7;
  *(long *)(lVar6 + 0x20) = lVar11;
  *(undefined **)(lVar6 + 0x28) = puVar9;
  uVar10 = 0x800000010efc6080;
  uVar8 = 0xd000000000000056;
  func_0x000107c5fb00(0xd000000000000056,0x800000010efc6080,lVar6);
  lVar6 = 0x112de1130;
  func_0x0001000285a8(0x112de1130,&UNK_10d9a8b70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    FUN_1019a2848(0,lVar11,0);
    puVar12 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1019a2848(1 < uVar4,uVar2 + 1,1);
      }
      puVar12 = puVar12 + 2;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x28) = uVar3;
      puVar5[uVar2 * 0x18 + 0x30] = 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar6 + 0x20) = puVar5;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined1 *)(lVar6 + 0x30) = 4;
  *param_1 = uVar8;
  param_1[1] = uVar10;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  param_1[4] = lVar6;
  param_1[5] = puVar9;
  return;
}



/* Entry: 1019a7964; end: 1019a7adf;  */

undefined ** FUN_1019a7964(void)

{
  return &PTR_DAT_110421730;
}



/* Entry: 1019a7ae0; end: 1019a7b63;  */

void FUN_1019a7ae0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 0;
  (**(code **)(lVar2 + 0x10))(0,0x1019a7ac4,0,uVar1,lVar2);
  func_0x0001000834e4(param_2);
  if (unaff_x21 == 0) {
    *param_1 = uVar3;
  }
  return;
}



/* Entry: 1019a7b64; end: 1019a7c0f;  */

void FUN_1019a7b64(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c606a0(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019a7c10; end: 1019a7c3f;  */

bool FUN_1019a7c10(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019a7c40; end: 1019a7c5b;  */

void FUN_1019a7c40(void)

{
  FUN_1019a7cdc();
  return;
}



/* Entry: 1019a7c5c; end: 1019a7c77;  */

void FUN_1019a7c5c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_28;
  
  puVar1 = &UNK_10d9a92e0;
  uVar2 = 0x112de1500;
  func_0x000107c614e0();
  puStack_28 = puVar1;
  func_0x0001000285a8(0x112de1500,&UNK_10d9a9300);
  func_0x000107c5fb20(&puStack_28,uVar2);
  return;
}



/* Entry: 1019a7c78; end: 1019a7cbf;  */

void FUN_1019a7c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  func_0x000107c614e0();
  uStack_28 = param_1;
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c5fb20(&uStack_28,param_2);
  return;
}



/* Entry: 1019a7cc0; end: 1019a7cdb;  */

void FUN_1019a7cc0(void)

{
  FUN_1019a7cdc();
  return;
}



/* Entry: 1019a7cdc; end: 1019a7d73;  */

void FUN_1019a7cdc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 0;
  (**(code **)(lVar2 + 0x30))(0,param_5,0,uVar1,lVar2);
  if (unaff_x21 == 0) {
    func_0x0001000834e4(param_2);
    *param_1 = uVar3;
    param_1[1] = param_5;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1019a7d74; end: 1019a7dff;  */

void FUN_1019a7d74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019a7e00; end: 1019a7e03;  */

void FUN_1019a7e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9140;
  func_0x000107c61520(&UNK_10d9a9140,&UNK_110421990);
  puRam0000000112de14d8 = puVar1;
  return;
}



/* Entry: 1019a7e04; end: 1019a7e43;  */

void FUN_1019a7e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9140;
  func_0x000107c61520(&UNK_10d9a9140,&UNK_110421990);
  puRam0000000112de14d8 = puVar1;
  return;
}



/* Entry: 1019a7e44; end: 1019a7e47;  */

void FUN_1019a7e44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a91b8;
  func_0x000107c61520(&UNK_10d9a91b8,&UNK_110421a10);
  puRam0000000112de14e0 = puVar1;
  return;
}



/* Entry: 1019a7e48; end: 1019a7e87;  */

void FUN_1019a7e48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a91b8;
  func_0x000107c61520(&UNK_10d9a91b8,&UNK_110421a10);
  puRam0000000112de14e0 = puVar1;
  return;
}



/* Entry: 1019a7e88; end: 1019a7e8b;  */

void FUN_1019a7e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9230;
  func_0x000107c61520(&UNK_10d9a9230,&UNK_110421a90);
  puRam0000000112de14e8 = puVar1;
  return;
}



/* Entry: 1019a7e8c; end: 1019a7ecb;  */

void FUN_1019a7e8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de14e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a9230;
  func_0x000107c61520(&UNK_10d9a9230,&UNK_110421a90);
  puRam0000000112de14e8 = puVar1;
  return;
}



/* Entry: 1019a7ecc; end: 1019a7f1b;  */

long FUN_1019a7ecc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1019a7f1c; end: 1019a7f5b;  */

undefined8 * FUN_1019a7f1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1019a7f5c; end: 1019a8047;  */

int FUN_1019a7f5c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019a8048; end: 1019a80ff;  */

void FUN_1019a8048(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61428(unaff_x20 + 0x18,auStack_50,0x21,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_58 = uVar6;
  func_0x0001055b171c(uVar5,&uStack_58);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_58;
  func_0x000107c61174();
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar6);
  lVar2 = 0;
  if ((int)uVar5 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c6157c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar4;
  func_0x0001055b1908(lVar4,lVar2);
  if (lVar3 < 3) {
    if (lVar3 == 1) {
      func_0x0001055b195c(lVar4,lVar2);
    }
    else {
      if (lVar3 != 2) {
LAB_1019a8224:
        func_0x0001019a8354(0);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a824c);
        (*pcVar1)();
      }
      func_0x0001055b19a8(lVar4,lVar2);
    }
  }
  else if (lVar3 == 3) {
    func_0x0001055b19f8(lVar4,lVar2);
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  else if (lVar3 == 4) {
    func_0x0001055b1ae0(lVar4,lVar2);
    func_0x000107c61180();
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
  }
  else if (lVar3 != 5) goto LAB_1019a8224;
  return;
}



/* Entry: 1019a8100; end: 1019a824b;  */

void FUN_1019a8100(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  func_0x0001055b1908(lVar3,param_1);
  if (lVar2 < 3) {
    if (lVar2 == 1) {
      func_0x0001055b195c(lVar3,param_1);
    }
    else {
      if (lVar2 != 2) {
LAB_1019a8224:
        func_0x0001019a8354(0);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019a824c);
        (*pcVar1)();
      }
      func_0x0001055b19a8(lVar3,param_1);
    }
  }
  else if (lVar2 == 3) {
    func_0x0001055b19f8(lVar3,param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  else if (lVar2 == 4) {
    func_0x0001055b1ae0(lVar3,param_1);
    func_0x000107c61180();
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  else if (lVar2 != 5) goto LAB_1019a8224;
  return;
}



/* Entry: 1019a824c; end: 1019a827f;  */

void FUN_1019a824c(void)

{
  long unaff_x20;
  
  func_0x0001055b17c4(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019a8280; end: 1019a82cb;  */

void FUN_1019a8280(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1019a8048();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1019a82cc; end: 1019a82eb;  */

void FUN_1019a82cc(void)

{
  func_0x000107c61168(&PTR_PTR_112de1548);
  return;
}



/* Entry: 1019a82ec; end: 1019a8367;  */

void FUN_1019a82ec(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1019a8368; end: 1019a8423;  */

void FUN_1019a8368(long param_1,long *param_2,long param_3)

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



/* Entry: 1019a8424; end: 1019a8533;  */

void FUN_1019a8424(void)

{
  func_0x000107c61168(&PTR_PTR_112de1600);
  return;
}


