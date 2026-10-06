/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d5e94; end: 1078d5e9f;  */

void FUN_1078d5e94(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078d6024; end: 1078d607b;  */

void FUN_1078d6024(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((*(long *)(param_2 + 0x10) != 0) && (*(long *)(*(long *)(param_2 + 0x10) + 8) != -1)) {
    return;
  }
  lStack_20 = param_2;
  lStack_18 = param_3;
  do {
    func_0x0001078d6b20();
  } while (extraout_w10 != 0);
  func_0x0001003a8180(param_2 + 8,&lStack_20);
  func_0x0001003a90c4(&lStack_20);
  return;
}



/* Entry: 1078d654c; end: 1078d6a97;  */

undefined1  [16] FUN_1078d654c(float param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *aplStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2;
  func_0x0001078d6b74();
  uStack_58 = extraout_x8;
  FUN_1078bee98(&uStack_70,lVar2 + 0x18);
  func_0x0001078d6b90(param_2 + 0x1e0);
  func_0x0001078d6b5c();
  func_0x0001078d6c70();
  fVar8 = *(float *)(param_2 + 0x3b8) * 0.5 - *(float *)(param_2 + 0x3b0);
  fVar7 = fVar8;
  if (fVar8 <= param_1 * 0.5) {
    fVar7 = param_1 * 0.5;
  }
  func_0x0001078d6c70();
  fVar6 = *(float *)(param_2 + 0x3bc) * 0.5 - *(float *)(param_2 + 0x3b0);
  if (fVar6 <= fVar8) {
    fVar6 = fVar8;
  }
  func_0x000108120484((float)(*(double *)(param_2 + 0x380) + (double)fVar7),
                      *(undefined8 *)(param_2 + 0x1e0));
  func_0x0001081204c0((float)(*(double *)(param_2 + 0x380) + (double)fVar6),
                      *(undefined8 *)(param_2 + 0x1e0));
  func_0x0001078d2c60(param_2 + 0x300);
  func_0x0001078d6b44();
  func_0x0001078d6b90(param_2 + 0x1c8);
  func_0x0001078d6b5c();
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20) + 0.0,
                       (float)*(undefined8 *)(param_2 + 0x390) + 0.0);
  uStack_70 = (long *)0x0;
  func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1c8));
  func_0x0001078d6b50(*(undefined4 *)(param_2 + 0x398));
  func_0x0001078d6c90();
  func_0x0001078d6bb4(*(float *)(param_2 + 0x3b0),*(undefined8 *)(param_2 + 0x1c8));
  func_0x00010811f0b8(*(undefined8 *)(param_2 + 0x1e0),param_2 + 0x1c8);
  uVar1 = *(double *)(param_2 + 0x388) == 0.0;
  if (0.0 < *(double *)(param_2 + 0x388)) {
    func_0x0001078d6b44();
    func_0x0001078d6b90(param_2 + 0x1d0);
    func_0x0001078d6b5c();
    fVar7 = (float)((double)*(float *)(param_2 + 0x390) * 0.5 + *(double *)(param_2 + 0x388) * -0.25
                   );
    fVar8 = (float)(*(double *)(param_2 + 0x388) * 0.5);
    uStack_70 = (long *)CONCAT44(*(float *)(param_2 + 0x394),fVar7);
    uStack_68 = CONCAT44(*(float *)(param_2 + 0x394) + fVar8,fVar8 + fVar7);
    func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1d0));
    func_0x00010813f2bc(&uStack_70,(float)(*(double *)(param_2 + 0x388) * 0.5),0);
    func_0x0001078d6c90();
    func_0x0001078d6bb4(*(undefined4 *)(param_2 + 0x3b0),*(undefined8 *)(param_2 + 0x1d0));
    func_0x00010811f0b8(*(undefined8 *)(param_2 + 0x1e0),param_2 + 0x1d0);
    FUN_1078ce538(&uStack_70,1);
    puStack_60[2] = 0;
    *puStack_60 = &PTR_DAT_1109e88e0;
    puStack_60[1] = 0;
    func_0x000108126a7c(puStack_60 + 3,param_2 + 0x18);
    puVar4 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
    func_0x0001078ce51c(aplStack_80,puVar4 + 3);
    func_0x0001078ce614(&uStack_70);
    uStack_70 = aplStack_80[0];
    (**(code **)(*aplStack_80[0] + 0x20))();
    func_0x0001078cdeb0(param_2 + 0x1d8,&uStack_70);
    func_0x0001078ce630(&uStack_70);
    uStack_70 = (long *)((ulong)(uint)(float)*(double *)(param_2 + 0x388) << 0x20);
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20) +
                         (float)*(double *)(param_2 + 0x388),
                         (float)*(undefined8 *)(param_2 + 0x390) + 0.0);
    func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1d8));
    uVar5 = *(undefined8 *)(param_2 + 0x1d8);
    uVar3 = param_2 + 0x2c0;
    func_0x0001078d2c60(uVar3);
    func_0x000108126c24(uVar5,uVar3 & 0xffffffff);
    func_0x000108376ad8(&uStack_70);
    func_0x000108377934(*(float *)(param_2 + 0x390) * 0.5,*(undefined4 *)(param_2 + 0x394),
                        &uStack_70);
    func_0x000108377c8c(*(undefined4 *)(param_2 + 0x390),*(float *)(param_2 + 0x394) * 0.5,
                        &uStack_70);
    func_0x000108377c8c(0,*(float *)(param_2 + 0x394) * 0.5,&uStack_70);
    func_0x000108377c8c(*(float *)(param_2 + 0x390) * 0.5,*(undefined4 *)(param_2 + 0x394),
                        &uStack_70);
    func_0x000108126dbc(*(undefined8 *)(param_2 + 0x1d8),&uStack_70);
    aplStack_80[0] = *(long **)(param_2 + 0x1d8);
    if ((aplStack_80[0] != (long *)0x0) && (aplStack_80[0][2] != 0)) {
      do {
        func_0x0001078d6bfc();
        aplStack_80[0] = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x00010811f0b8();
    func_0x0001078bee2c(aplStack_80);
    func_0x00010837ca5c(uStack_70);
  }
  func_0x0001078d6b44();
  func_0x0001078d6b90(param_2 + 0x1b8);
  func_0x0001078d6b5c();
  uVar5 = *(undefined8 *)(param_2 + 0x1b8);
  uVar3 = param_2 + 0x2d0;
  func_0x0001078d2c60(uVar3);
  func_0x00010811f748(uVar5,uVar3 & 0xffffffff);
  func_0x0001078d6b50(*(undefined4 *)(param_2 + 0x398));
  func_0x0001078d6b84();
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20) + 0.0,
                       (float)*(undefined8 *)(param_2 + 0x390) + 0.0);
  uStack_70 = (long *)0x0;
  func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1b8));
  func_0x00010811f0b8(*(undefined8 *)(param_2 + 0x1e0),param_2 + 0x1b8);
  func_0x0001078d6b44();
  func_0x0001078d6b90(param_2 + 0x1c0);
  func_0x0001078d6b5c();
  func_0x0001078d6b50(*(undefined4 *)(param_2 + 0x398));
  func_0x0001078d6b84();
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20) + 0.0,
                       (float)*(undefined8 *)(param_2 + 0x390) + 0.0);
  uStack_70 = (long *)0x0;
  func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1c0));
  uVar5 = *(undefined8 *)(param_2 + 0x1c0);
  uVar3 = param_2 + 0x2c0;
  func_0x0001078d2c60(uVar3);
  func_0x00010811f9c0(uVar5,uVar3 & 0xffffffff);
  func_0x00010811f9a8((float)*(double *)(param_2 + 0x380),*(undefined8 *)(param_2 + 0x1c0));
  func_0x00010811f0b8(*(undefined8 *)(param_2 + 0x1e0),param_2 + 0x1c0);
  uVar3 = *(ulong *)(param_2 + 0x360);
  func_0x000104c2d614();
  if ((uVar3 & 1) == 0) {
    func_0x0001078d6c9c();
    func_0x0001078bef50(param_2 + 0x1a8,&uStack_70);
    func_0x0001078bedfc(&uStack_70);
    func_0x00010811e790(*(undefined8 *)(param_2 + 0x1a8),2);
    func_0x0001078d6b50(*(undefined4 *)(param_2 + 0x39c));
    func_0x0001078d6b84();
    fVar8 = *(float *)(param_2 + 0x370);
    fVar6 = *(float *)(param_2 + 0x374);
    fVar7 = fVar8;
    if (fVar8 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar8 = fVar8 + 0.0;
    uVar1 = fVar7 == 0.0;
    if (fVar7 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar6 = fVar6 + 0.0;
    if (fVar7 <= 0.0) {
      fVar6 = 0.0;
    }
    uStack_70 = (long *)0x0;
    uStack_68 = CONCAT44(fVar6,fVar8);
    func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1a8));
    if ((*(long *)(param_2 + 0x1a8) != 0) && (*(long *)(*(long *)(param_2 + 0x1a8) + 0x10) != 0)) {
      do {
        func_0x0001078d6bfc();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001078d6c64();
    func_0x0001078d6b5c();
  }
  uVar3 = *(ulong *)(param_2 + 0x368);
  func_0x000104c2d614();
  if ((uVar3 & 1) == 0) {
    func_0x0001078d6c9c();
    func_0x0001078bef50(param_2 + 0x1b0,&uStack_70);
    func_0x0001078bedfc(&uStack_70);
    func_0x00010811e790(*(undefined8 *)(param_2 + 0x1b0),0);
    uStack_70 = *(long **)(param_2 + 0x3d0);
    uStack_68 = CONCAT44((float)((ulong)uStack_70 >> 0x20) + 0.0,SUB84(uStack_70,0) + 0.0);
    func_0x0001078d6b64(*(undefined8 *)(param_2 + 0x1b0));
    if ((*(long *)(param_2 + 0x1b0) != 0) && (*(long *)(*(long *)(param_2 + 0x1b0) + 0x10) != 0)) {
      do {
        func_0x0001078d6bfc();
      } while (extraout_w11_01 != 0);
    }
    func_0x0001078d6c64();
    func_0x0001078d6b5c();
  }
  lVar2 = param_2 + 0x1e0;
  func_0x000108122b44(param_2,lVar2,1);
  uVar3 = (ulong)*(uint *)(param_2 + 0x3c0);
  uVar9 = (ulong)*(uint *)(param_2 + 0x3c4);
  func_0x000108122c38(uVar3,uVar9,*(undefined4 *)(param_2 + 0x358));
  func_0x0001078d6b30(uStack_58);
  if ((bool)uVar1) {
    auVar10._8_8_ = uVar9;
    auVar10._0_8_ = uVar3;
    return auVar10;
  }
  ___stack_chk_fail();
  fVar7 = (float)uVar3;
  puVar4 = &uStack_70;
  func_0x0001078ce630();
  func_0x0001078d6ba4();
  func_0x0001078d5ce4();
  fVar8 = (fVar7 - *(float *)((long)puVar4 + 0x194)) - *(float *)((long)puVar4 + 0x1ac);
  fVar7 = 0.0;
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  func_0x0001078d5c68(puVar4,lVar2);
  fVar6 = (fVar8 + *(float *)(puVar4 + 0x32)) - *(float *)(puVar4 + 0x35);
  fVar8 = 0.0;
  if (0.0 <= fVar6) {
    fVar8 = fVar6;
  }
  if (fVar8 <= *(float *)(puVar4 + 0x38)) {
    fVar8 = *(float *)(puVar4 + 0x38);
  }
  auVar11._0_4_ = fVar8 + fVar8;
  auVar11._4_4_ = 0;
  if (fVar7 <= *(float *)((long)puVar4 + 0x1c4)) {
    fVar7 = *(float *)((long)puVar4 + 0x1c4);
  }
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = 0;
  return auVar11;
}



/* Entry: 1078d6f74; end: 1078d7293;  */

/* WARNING: Possible PIC construction at 0x0001078d70cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d70d0) */
/* WARNING: Removing unreachable block (ram,0x0001078d7104) */
/* WARNING: Removing unreachable block (ram,0x0001078d70fc) */
/* WARNING: Removing unreachable block (ram,0x0001078d7108) */
/* WARNING: Removing unreachable block (ram,0x0001078d7114) */
/* WARNING: Removing unreachable block (ram,0x0001078d711c) */
/* WARNING: Removing unreachable block (ram,0x0001078d7184) */

long * FUN_1078d6f74(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  plVar3 = &lStack_130;
  func_0x0001078d7840();
  lVar4 = *param_3;
  lStack_108 = param_3[1];
  lStack_110 = lVar4;
  uStack_58 = extraout_x8;
  if (lStack_108 != 0) {
    do {
      func_0x0001078d7850();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(auStack_90,*(long *)(lVar4 + 0x330) + 0x1b8);
  func_0x0001078c44f4(param_4,auStack_90);
  uVar2 = 0;
  func_0x000104c2d614();
  uVar1 = param_4 == 0;
  if (!(bool)uVar1) {
    uVar2 = 1;
  }
  if ((uVar2 & 1) == 0) {
    func_0x00010724ef84(&lStack_100,auStack_90);
    func_0x0001004c3cd0(&uStack_c8,&UNK_10f433cce,&lStack_100);
    param_1[1] = uStack_c0;
    *param_1 = uStack_c8;
    param_1[2] = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_100);
    func_0x000104c2f714(auStack_90);
    plVar3 = &lStack_110;
    func_0x0001078d6dc0();
    func_0x0001078d782c(uStack_58);
    if ((bool)uVar1) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x0001073c5f18(&lStack_100);
    func_0x0001078d7884();
    func_0x000104c2f714(&uStack_c8);
    func_0x000104c2f714(auStack_90);
    plVar3 = &lStack_110;
    func_0x0001078d6dc0();
    func_0x0001078d7860();
  }
  else {
    func_0x000104c2f64c(&uStack_c8);
    lStack_120 = lVar4 + 0x208;
    uStack_118 = 1;
    func_0x00010724e404();
    lVar4 = *(long *)(lVar4 + 0x330);
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 8) == 0) {
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            func_0x0001078d7850();
          } while (extraout_w10_01 != 0);
        }
      }
      else {
        func_0x0001003ae9f0(&lStack_100);
        if (lStack_100 == 0) {
          lStack_130 = 0;
          lStack_128 = 0;
        }
        else {
          lStack_128 = lStack_f8;
          lStack_130 = lVar4;
          if (lStack_f8 != 0) {
            do {
              func_0x0001078d7850();
            } while (extraout_w10_00 != 0);
          }
        }
        func_0x0001003a90c4(&lStack_100);
      }
    }
    lStack_130 = 0;
    lStack_128 = 0;
  }
  if (plVar3[1] != 0) {
    func_0x0001000df548();
  }
  return plVar3;
}



/* Entry: 1078d7480; end: 1078d7487;  */

void FUN_1078d7480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d7894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d76b8; end: 1078d76fb;  */

undefined8 * FUN_1078d76b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9108;
  func_0x000104c2f714(param_1 + 0x37);
  func_0x0001078bee2c(param_1 + 0x36);
  func_0x0001078bedfc(param_1 + 0x35);
  *param_1 = &PTR_DAT_110a255a0;
  func_0x0001078d4914(param_1 + 0x34);
  func_0x000108123684(param_1 + 0x33);
  func_0x00010810071c(param_1 + 0x1d);
  func_0x0001078bee2c(param_1 + 0x1c);
  func_0x000108123524(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1078d7a70; end: 1078d7c2f;  */

/* WARNING: Possible PIC construction at 0x0001078d7b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d7b38) */
/* WARNING: Removing unreachable block (ram,0x0001078d7bd4) */
/* WARNING: Removing unreachable block (ram,0x0001078d7c08) */
/* WARNING: Removing unreachable block (ram,0x0001078d7c20) */
/* WARNING: Removing unreachable block (ram,0x0001078d7bc0) */
/* WARNING: Removing unreachable block (ram,0x0001078d7c48) */

long * FUN_1078d7a70(undefined8 param_1,long *param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_70 [64];
  
  func_0x0001078d8450();
  lVar1 = *param_2;
  lStack_b0 = param_2[1];
  lStack_b8 = lVar1;
  if (lStack_b0 != 0) {
    do {
      func_0x0001078d8460();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(auStack_70);
  lStack_c8 = lVar1 + 0x208;
  uStack_c0 = 1;
  func_0x00010724e404();
  lVar1 = *(long *)(lVar1 + 0x330);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) == 0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        do {
          func_0x0001078d8460();
        } while (extraout_w10_01 != 0);
      }
    }
    else {
      func_0x0001003ae9f0(&lStack_a8);
      if (lStack_a8 == 0) {
        lStack_d8 = 0;
        lStack_d0 = 0;
      }
      else {
        lStack_d0 = lStack_a0;
        lStack_d8 = lVar1;
        if (lStack_a0 != 0) {
          do {
            func_0x0001078d8460();
          } while (extraout_w10_00 != 0);
        }
      }
      func_0x0001003a90c4(&lStack_a8);
    }
  }
  return &lStack_d8;
}



/* Entry: 1078d7d98; end: 1078d7d9f;  */

void FUN_1078d7d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d7fd4; end: 1078d8027;  */

undefined8 * FUN_1078d7fd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e92e0;
  func_0x000107475310(param_1 + 0x3d);
  func_0x0001078bee2c(param_1 + 0x3c);
  func_0x0001078ce46c(param_1 + 0x3b);
  func_0x0001078ce630(param_1 + 0x3a);
  func_0x0001078bee2c(param_1 + 0x39);
  *param_1 = &PTR_DAT_110a255a0;
  func_0x0001078d4914(param_1 + 0x34);
  func_0x000108123684(param_1 + 0x33);
  func_0x00010810071c(param_1 + 0x1d);
  func_0x0001078bee2c(param_1 + 0x1c);
  func_0x000108123524(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1078d84d4; end: 1078d8557;  */

ulong FUN_1078d84d4(float param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_2[1];
    if (lVar2 == 0) goto LAB_1078d8530;
    puVar4 = (undefined8 *)*param_2;
  }
  else {
    puVar4 = param_2;
    if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_1078d8530;
  }
  if (*(char *)((long)puVar4 + lVar2 + -1) == '%') {
    func_0x0001078d84a0();
    fVar5 = (float)(int)((param_1 / 100.0) * 255.0);
    fVar6 = 255.0;
    if (fVar5 < 255.0) {
      fVar6 = fVar5;
    }
    uVar1 = 0;
    if (0.0 <= fVar5) {
      uVar1 = (int)fVar6;
    }
    return (ulong)uVar1;
  }
LAB_1078d8530:
  func_0x0001078d84b8(param_2,10);
  uVar3 = (long)(double)(long)param_2 & ((long)(double)(long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  if (0xfe < (long)uVar3) {
    uVar3 = 0xff;
  }
  return uVar3;
}



/* Entry: 1078d8da0; end: 1078d931f;  */

/* WARNING: Possible PIC construction at 0x0001078d8e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d8e28) */
/* WARNING: Removing unreachable block (ram,0x0001078d8e44) */
/* WARNING: Removing unreachable block (ram,0x0001078d8e2c) */
/* WARNING: Removing unreachable block (ram,0x0001078d8e94) */
/* WARNING: Removing unreachable block (ram,0x0001078d9010) */
/* WARNING: Removing unreachable block (ram,0x0001078d90ac) */
/* WARNING: Removing unreachable block (ram,0x0001078d90b8) */
/* WARNING: Removing unreachable block (ram,0x0001078d90d4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9034) */
/* WARNING: Removing unreachable block (ram,0x0001078d9040) */
/* WARNING: Removing unreachable block (ram,0x0001078d8eac) */
/* WARNING: Removing unreachable block (ram,0x0001078d8ee8) */
/* WARNING: Removing unreachable block (ram,0x0001078d8ef0) */
/* WARNING: Removing unreachable block (ram,0x0001078d8efc) */
/* WARNING: Removing unreachable block (ram,0x0001078d8f10) */
/* WARNING: Removing unreachable block (ram,0x0001078d904c) */
/* WARNING: Removing unreachable block (ram,0x0001078d905c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9060) */
/* WARNING: Removing unreachable block (ram,0x0001078d9064) */
/* WARNING: Removing unreachable block (ram,0x0001078d906c) */
/* WARNING: Removing unreachable block (ram,0x0001078d907c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9084) */
/* WARNING: Removing unreachable block (ram,0x0001078d90a0) */
/* WARNING: Removing unreachable block (ram,0x0001078d90e8) */
/* WARNING: Removing unreachable block (ram,0x0001078d90f0) */
/* WARNING: Removing unreachable block (ram,0x0001078d8f2c) */
/* WARNING: Removing unreachable block (ram,0x0001078d90f4) */
/* WARNING: Removing unreachable block (ram,0x0001078d90fc) */
/* WARNING: Removing unreachable block (ram,0x0001078d9100) */
/* WARNING: Removing unreachable block (ram,0x0001078d9104) */
/* WARNING: Removing unreachable block (ram,0x0001078d9108) */
/* WARNING: Removing unreachable block (ram,0x0001078d910c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9134) */
/* WARNING: Removing unreachable block (ram,0x0001078d9158) */
/* WARNING: Removing unreachable block (ram,0x0001078d9160) */
/* WARNING: Removing unreachable block (ram,0x0001078d916c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9174) */
/* WARNING: Removing unreachable block (ram,0x0001078d9178) */
/* WARNING: Removing unreachable block (ram,0x0001078d917c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9180) */
/* WARNING: Removing unreachable block (ram,0x0001078d9188) */
/* WARNING: Removing unreachable block (ram,0x0001078d91a4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9190) */
/* WARNING: Removing unreachable block (ram,0x0001078d91a8) */
/* WARNING: Removing unreachable block (ram,0x0001078d9198) */
/* WARNING: Removing unreachable block (ram,0x0001078d91a0) */
/* WARNING: Removing unreachable block (ram,0x0001078d91b4) */
/* WARNING: Removing unreachable block (ram,0x0001078d91f4) */
/* WARNING: Removing unreachable block (ram,0x0001078d91e0) */
/* WARNING: Removing unreachable block (ram,0x0001078d91ec) */
/* WARNING: Removing unreachable block (ram,0x0001078d91fc) */
/* WARNING: Removing unreachable block (ram,0x0001078d9204) */
/* WARNING: Removing unreachable block (ram,0x0001078d9208) */
/* WARNING: Removing unreachable block (ram,0x0001078d920c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9210) */
/* WARNING: Removing unreachable block (ram,0x0001078d9214) */
/* WARNING: Removing unreachable block (ram,0x0001078d9220) */
/* WARNING: Removing unreachable block (ram,0x0001078d9234) */
/* WARNING: Removing unreachable block (ram,0x0001078d922c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9254) */
/* WARNING: Removing unreachable block (ram,0x0001078d92bc) */
/* WARNING: Removing unreachable block (ram,0x0001078d92c8) */
/* WARNING: Removing unreachable block (ram,0x0001078d92cc) */
/* WARNING: Removing unreachable block (ram,0x0001078d92d0) */
/* WARNING: Removing unreachable block (ram,0x0001078d92d8) */

ulong FUN_1078d8da0(byte *param_1,undefined *param_2)

{
  undefined **ppuVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  uVar4 = 0;
  iVar11 = -1;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0xffffffff;
  lVar7 = 0xffffffff;
  while( true ) {
    bVar2 = *param_1;
    uVar8 = (ulong)bVar2;
    if (bVar2 == 0 || 5 < uVar4) break;
    if (bVar2 != 0) {
      param_2 = (undefined *)0x500;
      goto code_r0x0001078d9320;
    }
    iVar3 = 0;
    param_2 = (undefined *)0x100;
    func_0x0001078d9320(0,0x100);
    if (iVar3 != 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      param_2 = &UNK_10f434352;
      pbVar5 = param_1;
      _sscanf(param_1,&UNK_10f434352);
      if ((int)pbVar5 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = &uStack_90;
        _strlen();
      }
      if ((int)lVar7 == -1) {
        lVar7 = 0;
        ppuVar1 = &PTR_DAT_1109e9ca8;
        if (puVar9 < (undefined8 *)0x4) {
          ppuVar1 = &PTR_DAT_1109e9ce0;
        }
        for (; (int)lVar7 != 7; lVar7 = lVar7 + 1) {
          param_2 = ppuVar1[lVar7];
          puVar6 = &uStack_90;
          func_0x0001078d8d30(puVar6,param_2);
          if ((int)puVar6 != 0) goto LAB_1078d9004;
        }
        lVar7 = 0xffffffff;
      }
      if ((int)lVar12 == -1) {
        for (lVar12 = 0; (int)lVar12 != 0xc; lVar12 = lVar12 + 1) {
          param_2 = (&PTR_DAT_1109e9d18)[lVar12];
          puVar6 = &uStack_90;
          func_0x0001078d8d30(puVar6,param_2);
          if ((int)puVar6 != 0) goto LAB_1078d9004;
        }
        lVar12 = 0xffffffff;
      }
      if (iVar11 != -1) break;
      iVar11 = 0x45;
      puVar10 = &UNK_10deda3f8;
      while( true ) {
        puVar6 = &uStack_90;
        param_2 = puVar10;
        func_0x0001078d8d30(puVar6,puVar10);
        if ((int)puVar6 != 0) break;
        puVar10 = puVar10 + 0xc;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) goto LAB_1078d92e0;
      }
      iVar11 = *(int *)(puVar10 + 8) * 0x3c;
LAB_1078d9004:
      param_1 = param_1 + (long)puVar9;
    }
    uVar4 = uVar4 + 1;
  }
LAB_1078d92e0:
  uVar8 = 0xffffffffffffffff;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
code_r0x0001078d9320:
  uVar4 = (uint)uVar8;
  if (0x7f < uVar4) {
    ___maskrune();
    return (ulong)(uVar4 != 0);
  }
  return (ulong)(((ulong)param_2 &
                 (ulong)*(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                                 (uVar8 & 0xffffffff) * 4 + 0x3c)) != 0);
}



/* Entry: 1078da98c; end: 1078da9e3;  */

int FUN_1078da98c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001078db144();
  return (int)(short)((short)uVar1 / 8) -
         (int)(char)(&UNK_10deda7b8)[(long)(int)param_1 + (long)param_2 * 0x29] *
         (int)(char)(&UNK_10deda85c)[(long)(int)param_1 + (long)param_2 * 0x29];
}



/* Entry: 1078daf9c; end: 1078db00f;  */

void FUN_1078daf9c(long param_1,int param_2,int param_3,int param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  puVar1 = *(ulong **)(param_1 + 0x10);
  func_0x0001078db0d4(puVar1,*(undefined8 *)(param_1 + 0x18),(long)param_3);
  func_0x0001078daba0();
  if (param_4 == 0) {
    uVar3 = *puVar1 & (uVar3 ^ 0xffffffffffffffff);
  }
  else {
    func_0x0001078dbf48();
    uVar3 = extraout_x8;
  }
  *puVar1 = uVar3;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  func_0x0001078db0d4(puVar2,*(undefined8 *)(param_1 + 0x30),(long)param_3);
  func_0x0001078daba0();
  func_0x0001078dbf48();
  *puVar2 = extraout_x8_00;
  return;
}



/* Entry: 1078db3d4; end: 1078db453;  */

void FUN_1078db3d4(long *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = param_1[1];
  if (uVar2 == param_1[2] * 0x40) {
    plVar1 = param_1;
    func_0x000104becbb8(param_1,uVar2 + 1);
    func_0x000104becb10(param_1,plVar1);
    uVar2 = param_1[1];
  }
  param_1[1] = uVar2 + 1;
  lVar3 = *param_1;
  uVar4 = uVar2 >> 6;
  uVar2 = 1L << (uVar2 & 0x3f);
  if (*param_2 == '\x01') {
    uVar2 = *(ulong *)(lVar3 + uVar4 * 8) | uVar2;
  }
  else {
    uVar2 = *(ulong *)(lVar3 + uVar4 * 8) & (uVar2 ^ 0xffffffffffffffff);
  }
  *(ulong *)(lVar3 + uVar4 * 8) = uVar2;
  return;
}



/* Entry: 1078db978; end: 1078db983;  */

long * FUN_1078db978(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plStack_60;
  undefined1 uStack_58;
  
  func_0x0001078dbd30();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_58 = 0;
  lVar1 = param_2;
  lVar2 = param_2;
  plStack_60 = param_1;
  func_0x0001078dba48();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + lVar2 * 0x18;
  lVar2 = lVar1 + param_2 * 0x18;
  for (param_2 = param_2 * 0x18; param_2 != 0; param_2 = param_2 + -0x18) {
    func_0x000105007b50(lVar1,param_3);
    lVar1 = lVar1 + 0x18;
  }
  param_1[1] = lVar2;
  uStack_58 = 1;
  func_0x0001078dba8c(&plStack_60);
  return param_1;
}



/* Entry: 1078dbcf8; end: 1078dbf87;  */

void FUN_1078dbcf8(void)

{
  return;
}



/* Entry: 1078dd8b4; end: 1078dd94b;  */

undefined8 FUN_1078dd8b4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    return 0xb;
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 == (long *)0x0) {
    return 0xb;
  }
  lVar2 = plVar4[4];
  uVar1 = lVar2 + param_3;
  if ((long)uVar1 < lVar2) {
    return 7;
  }
  if ((ulong)plVar4[3] < uVar1) {
    return 7;
  }
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    lVar3 = plVar4[1];
  }
  _memcpy(param_2,lVar3 + lVar2);
  plVar4[4] = uVar1;
  return 0;
}



/* Entry: 1078dfad4; end: 1078e0463;  */

void FUN_1078dfad4(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  segment_command *psVar17;
  long lStack_d8;
  long lStack_d0;
  char cStack_c4;
  char cStack_c3;
  ushort uStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar5 = (undefined8 *)0xa8;
  _malloc();
  param_1[3] = puVar5;
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  puVar5[0x11] = param_2[9];
  puVar5[0x10] = uVar14;
  puVar5[0x13] = uVar16;
  puVar5[0x12] = uVar15;
  puVar5[0x14] = param_2[0xc];
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  puVar5[9] = param_2[1];
  puVar5[8] = uVar14;
  puVar5[0xb] = uVar16;
  puVar5[10] = uVar15;
  uVar16 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  puVar5[0xd] = param_2[5];
  puVar5[0xc] = uVar16;
  puVar5[0xf] = uVar15;
  puVar5[0xe] = uVar14;
  param_1[8] = 0x6400000072;
  *(undefined4 *)(param_1 + 9) = 0x6f;
  *(undefined4 *)param_1 = 1;
  param_1[1] = &PTR_DAT_1132309f8;
  puVar5[2] = &DAT_1078e0934;
  puVar5[1] = &DAT_1078e092c;
  *puVar5 = &DAT_1078e07f0;
  pcVar6 = (char *)0x1;
  _malloc();
  param_1[0x11] = pcVar6;
  if (pcVar6 == (char *)0x0) {
    uStack_78 = puVar5[0x11];
    lStack_80 = puVar5[0x10];
    uStack_68 = puVar5[0x13];
    uStack_70 = puVar5[0x12];
    uStack_60 = puVar5[0x14];
    uStack_b8 = puVar5[9];
    uStack_c0 = puVar5[8];
    uStack_a8 = puVar5[0xb];
    uStack_b0 = puVar5[10];
    uStack_98 = puVar5[0xd];
    uStack_a0 = puVar5[0xc];
    uStack_88 = puVar5[0xf];
    pcStack_90 = (code *)puVar5[0xe];
    if (lStack_80 != 0) {
      (*pcStack_90)(&uStack_c0);
    }
    if (param_1[10] != 0) {
      func_0x0001078dd390();
    }
    if (param_1[0xc] != 0) {
      _free();
    }
    if (param_1[0xe] != 0) {
      _free();
    }
    _free(param_1[3]);
    return;
  }
  *pcVar6 = '\0';
  lVar10 = param_3;
  func_0x0001078dcb80(param_3,&cStack_c4);
  if ((int)lVar10 != 0) goto LAB_1078e0334;
  iVar1 = *(int *)(param_3 + 0x1c);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x18);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(param_3 + 0x10);
  psVar17 = (segment_command *)0x100000008;
  uVar16 = 0;
  uVar14 = 0x100000001;
  uVar15 = 0x100000001;
  if (iVar1 < 0x8d46) {
    if (iVar1 < 0x87ee) {
      if (iVar1 < 0x81a5) {
        switch(iVar1) {
        case 0x804f:
          psVar17 = (segment_command *)0x10000000c;
          uVar16 = 1;
          break;
        case 0x8050:
        case 0x8056:
          goto code_r0x0001078dfdb4;
        case 0x8051:
          goto code_r0x0001078dfe30;
        case 0x8052:
        case 0x8057:
        case 0x8059:
code_r0x0001078dfe24:
          psVar17 = &segment_command_100000020;
          uVar16 = 1;
          break;
        case 0x8053:
          psVar17 = (segment_command *)0x100000024;
          uVar16 = 1;
          break;
        case 0x8054:
          goto LAB_1078dfe6c;
        case 0x8058:
          goto code_r0x0001078dfdc0;
        case 0x805a:
          psVar17 = (segment_command *)0x100000030;
          uVar16 = 1;
          break;
        case 0x805b:
          goto code_r0x0001078dfedc;
        default:
          if (iVar1 != 0x2a10) goto LAB_1078e0334;
        case 0x8055:
          psVar17 = (segment_command *)0x100000008;
          uVar16 = 1;
        }
      }
      else {
        switch(iVar1) {
        case 0x81a5:
          psVar17 = (segment_command *)0x100000010;
          uVar16 = 8;
          break;
        case 0x81a6:
        case 0x81a7:
code_r0x0001078dfeac:
          psVar17 = &segment_command_100000020;
          uVar16 = 8;
          break;
        case 0x81a8:
        case 0x81a9:
        case 0x81aa:
        case 0x81ab:
        case 0x81ac:
        case 0x81ad:
        case 0x81ae:
        case 0x81af:
        case 0x81b0:
        case 0x81b1:
        case 0x81b2:
        case 0x81b3:
        case 0x81b4:
        case 0x81b5:
        case 0x81b6:
        case 0x81b7:
        case 0x81b8:
        case 0x81b9:
        case 0x81ba:
        case 0x81bb:
        case 0x81bc:
        case 0x81bd:
        case 0x81be:
        case 0x81bf:
        case 0x81c0:
        case 0x81c1:
        case 0x81c2:
        case 0x81c3:
        case 0x81c4:
        case 0x81c5:
        case 0x81c6:
        case 0x81c7:
        case 0x81c8:
        case 0x81c9:
        case 0x81ca:
        case 0x81cb:
        case 0x81cc:
        case 0x81cd:
        case 0x81ce:
        case 0x81cf:
        case 0x81d0:
        case 0x81d1:
        case 0x81d2:
        case 0x81d3:
        case 0x81d4:
        case 0x81d5:
        case 0x81d6:
        case 0x81d7:
        case 0x81d8:
        case 0x81d9:
        case 0x81da:
        case 0x81db:
        case 0x81dc:
        case 0x81dd:
        case 0x81de:
        case 0x81df:
        case 0x81e0:
        case 0x81e1:
        case 0x81e2:
        case 0x81e3:
        case 0x81e4:
        case 0x81e5:
        case 0x81e6:
        case 0x81e7:
        case 0x81e8:
        case 0x81e9:
        case 0x81ea:
        case 0x81eb:
        case 0x81ec:
        case 0x81ed:
        case 0x81ee:
        case 0x81ef:
        case 0x81f0:
        case 0x81f1:
        case 0x81f2:
        case 0x81f3:
        case 0x81f4:
        case 0x81f5:
        case 0x81f6:
        case 0x81f7:
        case 0x81f8:
        case 0x81f9:
        case 0x81fa:
        case 0x81fb:
        case 0x81fc:
        case 0x81fd:
        case 0x81fe:
        case 0x81ff:
        case 0x8200:
        case 0x8201:
        case 0x8202:
        case 0x8203:
        case 0x8204:
        case 0x8205:
        case 0x8206:
        case 0x8207:
        case 0x8208:
        case 0x8209:
        case 0x820a:
        case 0x820b:
        case 0x820c:
        case 0x820d:
        case 0x820e:
        case 0x820f:
        case 0x8210:
        case 0x8211:
        case 0x8212:
        case 0x8213:
        case 0x8214:
        case 0x8215:
        case 0x8216:
        case 0x8217:
        case 0x8218:
        case 0x8219:
        case 0x821a:
        case 0x821b:
        case 0x821c:
        case 0x821d:
        case 0x821e:
        case 0x821f:
        case 0x8220:
        case 0x8221:
        case 0x8222:
        case 0x8223:
        case 0x8224:
        case 0x8225:
        case 0x8226:
        case 0x8227:
        case 0x8228:
          goto LAB_1078e0334;
        case 0x8229:
        case 0x8231:
        case 0x8232:
          break;
        case 0x822a:
        case 0x822b:
        case 0x822d:
        case 0x8233:
        case 0x8234:
        case 0x8237:
        case 0x8238:
          goto code_r0x0001078dfd80;
        case 0x822c:
        case 0x822e:
        case 0x822f:
        case 0x8235:
        case 0x8236:
        case 0x8239:
        case 0x823a:
          goto code_r0x0001078dfdc0;
        case 0x8230:
        case 0x823b:
        case 0x823c:
          goto code_r0x0001078dfedc;
        default:
          if (1 < iVar1 - 0x83f0U) {
            if (1 < iVar1 - 0x83f2U) goto LAB_1078e0334;
            goto LAB_1078dfe98;
          }
          goto LAB_1078dff20;
        }
      }
      goto LAB_1078e0148;
    }
    if (iVar1 < 0x8a56) {
      if (iVar1 < 0x881b) {
        if (0x8814 < iVar1) {
          if (iVar1 == 0x8815) goto LAB_1078dfee8;
          if (iVar1 != 0x881a) goto LAB_1078e0334;
          goto code_r0x0001078dfedc;
        }
        if (iVar1 != 0x87ee) {
          if (iVar1 != 0x8814) goto LAB_1078e0334;
          goto code_r0x0001078dfdfc;
        }
        goto LAB_1078dfe98;
      }
      if (0x8a53 < iVar1) {
        if (iVar1 != 0x8a54) {
          iVar11 = 0x8a55;
          goto LAB_1078e0088;
        }
        goto LAB_1078e009c;
      }
      if (iVar1 == 0x881b) goto LAB_1078dfe6c;
      if (iVar1 != 0x88f0) goto LAB_1078e0334;
      psVar17 = &segment_command_100000020;
      uVar16 = 0x18;
      goto LAB_1078e0148;
    }
    switch(iVar1) {
    case 0x8b90:
      psVar17 = (segment_command *)0x100000004;
      uVar16 = 0x18000000004;
      break;
    case 0x8b91:
      psVar17 = (segment_command *)0x100000004;
      uVar16 = 0x20000000004;
      break;
    case 0x8b92:
    case 0x8b93:
    case 0x8b94:
      psVar17 = (segment_command *)0x100000004;
      uVar16 = 0x10000000004;
      break;
    case 0x8b95:
      psVar17 = (segment_command *)0x100000008;
      uVar16 = 0x180000000004;
      break;
    case 0x8b96:
      psVar17 = (segment_command *)0x100000008;
      uVar16 = 0x200000000004;
      break;
    case 0x8b97:
    case 0x8b98:
    case 0x8b99:
      psVar17 = (segment_command *)0x100000008;
      uVar16 = 0x100000000004;
      break;
    case 0x8b9a:
    case 0x8b9b:
    case 0x8b9c:
    case 0x8b9d:
    case 0x8b9e:
    case 0x8b9f:
    case 0x8ba0:
    case 0x8ba1:
    case 0x8ba2:
    case 0x8ba3:
    case 0x8ba4:
    case 0x8ba5:
    case 0x8ba6:
    case 0x8ba7:
    case 0x8ba8:
    case 0x8ba9:
    case 0x8baa:
    case 0x8bab:
    case 0x8bac:
    case 0x8bad:
    case 0x8bae:
    case 0x8baf:
    case 0x8bb0:
    case 0x8bb1:
    case 0x8bb2:
    case 0x8bb3:
    case 0x8bb4:
    case 0x8bb5:
    case 0x8bb6:
    case 0x8bb7:
    case 0x8bb8:
    case 0x8bb9:
    case 0x8bba:
    case 0x8bbb:
    case 0x8bbc:
    case 0x8bbd:
    case 0x8bbe:
    case 0x8bbf:
    case 0x8bc0:
    case 0x8bc1:
    case 0x8bc2:
    case 0x8bc3:
    case 0x8bc4:
    case 0x8bc5:
    case 0x8bc6:
    case 0x8bc7:
    case 0x8bc8:
    case 0x8bc9:
    case 0x8bca:
    case 0x8bcb:
    case 0x8bcc:
    case 0x8bcd:
    case 0x8bce:
    case 0x8bcf:
    case 0x8bd0:
    case 0x8bd1:
    case 0x8bd2:
    case 0x8bd3:
    case 0x8bd4:
    case 0x8bd5:
    case 0x8bd6:
    case 0x8bd7:
    case 0x8bd8:
    case 0x8bd9:
    case 0x8bda:
    case 0x8bdb:
    case 0x8bdc:
    case 0x8bdd:
    case 0x8bde:
    case 0x8bdf:
    case 0x8be0:
    case 0x8be1:
    case 0x8be2:
    case 0x8be3:
    case 0x8be4:
    case 0x8be5:
    case 0x8be6:
    case 0x8be7:
    case 0x8be8:
    case 0x8be9:
    case 0x8bea:
    case 0x8beb:
    case 0x8bec:
    case 0x8bed:
    case 0x8bee:
    case 0x8bef:
    case 0x8bf0:
    case 0x8bf1:
    case 0x8bf2:
    case 0x8bf3:
    case 0x8bf4:
    case 0x8bf5:
    case 0x8bf6:
    case 0x8bf7:
    case 0x8bf8:
    case 0x8bf9:
    case 0x8bfa:
    case 0x8bfb:
    case 0x8bfc:
    case 0x8bfd:
    case 0x8bfe:
    case 0x8bff:
    case 0x8c04:
    case 0x8c05:
    case 0x8c06:
    case 0x8c07:
    case 0x8c08:
    case 0x8c09:
    case 0x8c0a:
    case 0x8c0b:
    case 0x8c0c:
    case 0x8c0d:
    case 0x8c0e:
    case 0x8c0f:
    case 0x8c10:
    case 0x8c11:
    case 0x8c12:
    case 0x8c13:
    case 0x8c14:
    case 0x8c15:
    case 0x8c16:
    case 0x8c17:
    case 0x8c18:
    case 0x8c19:
    case 0x8c1a:
    case 0x8c1b:
    case 0x8c1c:
    case 0x8c1d:
    case 0x8c1e:
    case 0x8c1f:
    case 0x8c20:
    case 0x8c21:
    case 0x8c22:
    case 0x8c23:
    case 0x8c24:
    case 0x8c25:
    case 0x8c26:
    case 0x8c27:
    case 0x8c28:
    case 0x8c29:
    case 0x8c2a:
    case 0x8c2b:
    case 0x8c2c:
    case 0x8c2d:
    case 0x8c2e:
    case 0x8c2f:
    case 0x8c30:
    case 0x8c31:
    case 0x8c32:
    case 0x8c33:
    case 0x8c34:
    case 0x8c35:
    case 0x8c36:
    case 0x8c37:
    case 0x8c38:
    case 0x8c39:
    case 0x8c3b:
    case 0x8c3c:
    case 0x8c3e:
    case 0x8c3f:
    case 0x8c40:
    case 0x8c42:
    case 0x8c44:
    case 0x8c45:
    case 0x8c46:
    case 0x8c47:
    case 0x8c48:
    case 0x8c49:
    case 0x8c4a:
    case 0x8c4b:
    case 0x8c50:
    case 0x8c51:
    case 0x8c52:
    case 0x8c53:
    case 0x8c54:
    case 0x8c55:
    case 0x8c56:
    case 0x8c57:
    case 0x8c58:
    case 0x8c59:
    case 0x8c5a:
    case 0x8c5b:
    case 0x8c5c:
    case 0x8c5d:
    case 0x8c5e:
    case 0x8c5f:
    case 0x8c60:
    case 0x8c61:
    case 0x8c62:
    case 0x8c63:
    case 0x8c64:
    case 0x8c65:
    case 0x8c66:
    case 0x8c67:
    case 0x8c68:
    case 0x8c69:
    case 0x8c6a:
    case 0x8c6b:
    case 0x8c6c:
    case 0x8c6d:
    case 0x8c6e:
    case 0x8c6f:
    case 0x8c74:
    case 0x8c75:
    case 0x8c76:
    case 0x8c77:
    case 0x8c78:
    case 0x8c79:
    case 0x8c7a:
    case 0x8c7b:
    case 0x8c7c:
    case 0x8c7d:
    case 0x8c7e:
    case 0x8c7f:
    case 0x8c80:
    case 0x8c81:
    case 0x8c82:
    case 0x8c83:
    case 0x8c84:
    case 0x8c85:
    case 0x8c86:
    case 0x8c87:
    case 0x8c88:
    case 0x8c89:
    case 0x8c8a:
    case 0x8c8b:
    case 0x8c8c:
    case 0x8c8d:
    case 0x8c8e:
    case 0x8c8f:
    case 0x8c90:
    case 0x8c91:
    case 0x8c94:
    case 0x8c95:
    case 0x8c96:
    case 0x8c97:
    case 0x8c98:
    case 0x8c99:
    case 0x8c9a:
    case 0x8c9b:
    case 0x8c9c:
    case 0x8c9d:
    case 0x8c9e:
    case 35999:
    case 36000:
    case 0x8ca1:
    case 0x8ca2:
    case 0x8ca3:
    case 0x8ca4:
    case 0x8ca5:
    case 0x8ca6:
    case 0x8ca7:
    case 0x8ca8:
    case 0x8ca9:
    case 0x8caa:
    case 0x8cab:
      goto LAB_1078e0334;
    case 0x8c00:
    case 0x8c02:
      goto code_r0x0001078e0090;
    case 0x8c01:
    case 0x8c03:
LAB_1078e009c:
      uVar15 = 0x200000002;
      goto LAB_1078e00b0;
    case 0x8c3a:
    case 0x8c3d:
      goto code_r0x0001078dfe24;
    case 0x8c41:
      goto code_r0x0001078dfe30;
    case 0x8c43:
      goto code_r0x0001078dfdc0;
    case 0x8c4c:
    case 0x8c4d:
    case 0x8c70:
    case 0x8c71:
    case 0x8c92:
      goto LAB_1078dff20;
    case 0x8c4e:
    case 0x8c4f:
    case 0x8c72:
    case 0x8c73:
    case 0x8c93:
      goto LAB_1078dfe98;
    case 0x8cac:
      goto code_r0x0001078dfeac;
    case 0x8cad:
      goto code_r0x0001078dff34;
    default:
      if (iVar1 == 0x8a56) goto LAB_1078e009c;
      iVar11 = 0x8a57;
LAB_1078e0088:
      if (iVar1 != iVar11) goto LAB_1078e0334;
      goto code_r0x0001078e0090;
    }
    goto LAB_1078e0148;
  }
  if (iVar1 < 0x9137) {
    if (iVar1 < 0x8e8c) {
      switch(iVar1) {
      case 0x8d46:
        psVar17 = (segment_command *)0x100000001;
        uVar16 = 0x10;
        break;
      case 0x8d47:
        psVar17 = (segment_command *)0x100000004;
        uVar16 = 0x10;
        break;
      case 0x8d48:
        psVar17 = (segment_command *)0x100000008;
        uVar16 = 0x10;
        break;
      case 0x8d49:
        psVar17 = (segment_command *)0x100000010;
        uVar16 = 0x10;
        break;
      default:
        goto LAB_1078e0334;
      case 0x8d62:
code_r0x0001078dfdb4:
        psVar17 = (segment_command *)0x100000010;
        uVar16 = 1;
        break;
      case 0x8d64:
      case 0x8dbb:
      case 0x8dbc:
        goto LAB_1078dff20;
      case 0x8d70:
      case 0x8d82:
code_r0x0001078dfdfc:
        psVar17 = (segment_command *)0x100000080;
        uVar16 = 0;
        break;
      case 0x8d71:
      case 0x8d83:
LAB_1078dfee8:
        psVar17 = (segment_command *)0x100000060;
        uVar16 = 0;
        break;
      case 0x8d76:
      case 0x8d88:
        goto code_r0x0001078dfedc;
      case 0x8d77:
      case 0x8d89:
        goto LAB_1078dfe6c;
      case 0x8d7c:
      case 0x8d8e:
        goto code_r0x0001078dfdc0;
      case 0x8d7d:
      case 0x8d8f:
        goto code_r0x0001078dfe30;
      case 0x8dab:
        goto code_r0x0001078dfeac;
      case 0x8dac:
code_r0x0001078dff34:
        psVar17 = (segment_command *)0x100000040;
        uVar16 = 0x18;
        break;
      case 0x8dbd:
      case 0x8dbe:
        goto LAB_1078dfe98;
      }
    }
    else {
      switch(iVar1) {
      case 0x8f94:
      case 0x8fbd:
        break;
      case 0x8f95:
      case 0x8f98:
      case 0x8fbe:
code_r0x0001078dfd80:
        psVar17 = (segment_command *)0x100000010;
        uVar16 = 0;
        break;
      case 0x8f96:
code_r0x0001078dfe30:
        psVar17 = (segment_command *)0x100000018;
        uVar16 = 0;
        break;
      case 0x8f97:
      case 0x8f99:
code_r0x0001078dfdc0:
        psVar17 = &segment_command_100000020;
        uVar16 = 0;
        break;
      case 0x8f9a:
LAB_1078dfe6c:
        psVar17 = (segment_command *)0x100000030;
        uVar16 = 0;
        break;
      case 0x8f9b:
code_r0x0001078dfedc:
        psVar17 = (segment_command *)0x100000040;
        uVar16 = 0;
        break;
      case 0x8f9c:
      case 0x8f9d:
      case 0x8f9e:
      case 0x8f9f:
      case 0x8fa0:
      case 0x8fa1:
      case 0x8fa2:
      case 0x8fa3:
      case 0x8fa4:
      case 0x8fa5:
      case 0x8fa6:
      case 0x8fa7:
      case 0x8fa8:
      case 0x8fa9:
      case 0x8faa:
      case 0x8fab:
      case 0x8fac:
      case 0x8fad:
      case 0x8fae:
      case 0x8faf:
      case 0x8fb0:
      case 0x8fb1:
      case 0x8fb2:
      case 0x8fb3:
      case 0x8fb4:
      case 0x8fb5:
      case 0x8fb6:
      case 0x8fb7:
      case 0x8fb8:
      case 0x8fb9:
      case 0x8fba:
      case 0x8fbb:
      case 0x8fbc:
        goto LAB_1078e0334;
      default:
        if (3 < iVar1 - 0x8e8cU) {
          if (iVar1 != 0x906f) goto LAB_1078e0334;
          goto code_r0x0001078dfe24;
        }
LAB_1078dfe98:
        uVar14 = 0x100000004;
        goto code_r0x0001078dfea0;
      }
    }
    goto LAB_1078e0148;
  }
  switch(iVar1) {
  case 0x9270:
  case 0x9271:
  case 0x9274:
  case 0x9275:
  case 0x9276:
  case 0x9277:
  case 0x93f1:
    goto LAB_1078dff20;
  case 0x9272:
  case 0x9273:
  case 0x9278:
  case 0x9279:
  case 0x93b0:
  case 0x93d0:
    goto LAB_1078dfe98;
  case 0x927a:
  case 0x927b:
  case 0x927c:
  case 0x927d:
  case 0x927e:
  case 0x927f:
  case 0x9280:
  case 0x9281:
  case 0x9282:
  case 0x9283:
  case 0x9284:
  case 0x9285:
  case 0x9286:
  case 0x9287:
  case 0x9288:
  case 0x9289:
  case 0x928a:
  case 0x928b:
  case 0x928c:
  case 0x928d:
  case 0x928e:
  case 0x928f:
  case 0x9290:
  case 0x9291:
  case 0x9292:
  case 0x9293:
  case 0x9294:
  case 0x9295:
  case 0x9296:
  case 0x9297:
  case 0x9298:
  case 0x9299:
  case 0x929a:
  case 0x929b:
  case 0x929c:
  case 0x929d:
  case 0x929e:
  case 0x929f:
  case 0x92a0:
  case 0x92a1:
  case 0x92a2:
  case 0x92a3:
  case 0x92a4:
  case 0x92a5:
  case 0x92a6:
  case 0x92a7:
  case 0x92a8:
  case 0x92a9:
  case 0x92aa:
  case 0x92ab:
  case 0x92ac:
  case 0x92ad:
  case 0x92ae:
  case 0x92af:
  case 0x92b0:
  case 0x92b1:
  case 0x92b2:
  case 0x92b3:
  case 0x92b4:
  case 0x92b5:
  case 0x92b6:
  case 0x92b7:
  case 0x92b8:
  case 0x92b9:
  case 0x92ba:
  case 0x92bb:
  case 0x92bc:
  case 0x92bd:
  case 0x92be:
  case 0x92bf:
  case 0x92c0:
  case 0x92c1:
  case 0x92c2:
  case 0x92c3:
  case 0x92c4:
  case 0x92c5:
  case 0x92c6:
  case 0x92c7:
  case 0x92c8:
  case 0x92c9:
  case 0x92ca:
  case 0x92cb:
  case 0x92cc:
  case 0x92cd:
  case 0x92ce:
  case 0x92cf:
  case 0x92d0:
  case 0x92d1:
  case 0x92d2:
  case 0x92d3:
  case 0x92d4:
  case 0x92d5:
  case 0x92d6:
  case 0x92d7:
  case 0x92d8:
  case 0x92d9:
  case 0x92da:
  case 0x92db:
  case 0x92dc:
  case 0x92dd:
  case 0x92de:
  case 0x92df:
  case 0x92e0:
  case 0x92e1:
  case 0x92e2:
  case 0x92e3:
  case 0x92e4:
  case 0x92e5:
  case 0x92e6:
  case 0x92e7:
  case 0x92e8:
  case 0x92e9:
  case 0x92ea:
  case 0x92eb:
  case 0x92ec:
  case 0x92ed:
  case 0x92ee:
  case 0x92ef:
  case 0x92f0:
  case 0x92f1:
  case 0x92f2:
  case 0x92f3:
  case 0x92f4:
  case 0x92f5:
  case 0x92f6:
  case 0x92f7:
  case 0x92f8:
  case 0x92f9:
  case 0x92fa:
  case 0x92fb:
  case 0x92fc:
  case 0x92fd:
  case 0x92fe:
  case 0x92ff:
  case 0x9300:
  case 0x9301:
  case 0x9302:
  case 0x9303:
  case 0x9304:
  case 0x9305:
  case 0x9306:
  case 0x9307:
  case 0x9308:
  case 0x9309:
  case 0x930a:
  case 0x930b:
  case 0x930c:
  case 0x930d:
  case 0x930e:
  case 0x930f:
  case 0x9310:
  case 0x9311:
  case 0x9312:
  case 0x9313:
  case 0x9314:
  case 0x9315:
  case 0x9316:
  case 0x9317:
  case 0x9318:
  case 0x9319:
  case 0x931a:
  case 0x931b:
  case 0x931c:
  case 0x931d:
  case 0x931e:
  case 0x931f:
  case 0x9320:
  case 0x9321:
  case 0x9322:
  case 0x9323:
  case 0x9324:
  case 0x9325:
  case 0x9326:
  case 0x9327:
  case 0x9328:
  case 0x9329:
  case 0x932a:
  case 0x932b:
  case 0x932c:
  case 0x932d:
  case 0x932e:
  case 0x932f:
  case 0x9330:
  case 0x9331:
  case 0x9332:
  case 0x9333:
  case 0x9334:
  case 0x9335:
  case 0x9336:
  case 0x9337:
  case 0x9338:
  case 0x9339:
  case 0x933a:
  case 0x933b:
  case 0x933c:
  case 0x933d:
  case 0x933e:
  case 0x933f:
  case 0x9340:
  case 0x9341:
  case 0x9342:
  case 0x9343:
  case 0x9344:
  case 0x9345:
  case 0x9346:
  case 0x9347:
  case 0x9348:
  case 0x9349:
  case 0x934a:
  case 0x934b:
  case 0x934c:
  case 0x934d:
  case 0x934e:
  case 0x934f:
  case 0x9350:
  case 0x9351:
  case 0x9352:
  case 0x9353:
  case 0x9354:
  case 0x9355:
  case 0x9356:
  case 0x9357:
  case 0x9358:
  case 0x9359:
  case 0x935a:
  case 0x935b:
  case 0x935c:
  case 0x935d:
  case 0x935e:
  case 0x935f:
  case 0x9360:
  case 0x9361:
  case 0x9362:
  case 0x9363:
  case 0x9364:
  case 0x9365:
  case 0x9366:
  case 0x9367:
  case 0x9368:
  case 0x9369:
  case 0x936a:
  case 0x936b:
  case 0x936c:
  case 0x936d:
  case 0x936e:
  case 0x936f:
  case 0x9370:
  case 0x9371:
  case 0x9372:
  case 0x9373:
  case 0x9374:
  case 0x9375:
  case 0x9376:
  case 0x9377:
  case 0x9378:
  case 0x9379:
  case 0x937a:
  case 0x937b:
  case 0x937c:
  case 0x937d:
  case 0x937e:
  case 0x937f:
  case 0x9380:
  case 0x9381:
  case 0x9382:
  case 0x9383:
  case 0x9384:
  case 0x9385:
  case 0x9386:
  case 0x9387:
  case 0x9388:
  case 0x9389:
  case 0x938a:
  case 0x938b:
  case 0x938c:
  case 0x938d:
  case 0x938e:
  case 0x938f:
  case 0x9390:
  case 0x9391:
  case 0x9392:
  case 0x9393:
  case 0x9394:
  case 0x9395:
  case 0x9396:
  case 0x9397:
  case 0x9398:
  case 0x9399:
  case 0x939a:
  case 0x939b:
  case 0x939c:
  case 0x939d:
  case 0x939e:
  case 0x939f:
  case 0x93a0:
  case 0x93a1:
  case 0x93a2:
  case 0x93a3:
  case 0x93a4:
  case 0x93a5:
  case 0x93a6:
  case 0x93a7:
  case 0x93a8:
  case 0x93a9:
  case 0x93aa:
  case 0x93ab:
  case 0x93ac:
  case 0x93ad:
  case 0x93ae:
  case 0x93af:
  case 0x93be:
  case 0x93bf:
  case 0x93ca:
  case 0x93cb:
  case 0x93cc:
  case 0x93cd:
  case 0x93ce:
  case 0x93cf:
  case 0x93de:
  case 0x93df:
  case 0x93ea:
  case 0x93eb:
  case 0x93ec:
  case 0x93ed:
  case 0x93ee:
  case 0x93ef:
    goto LAB_1078e0334;
  case 0x93b1:
  case 0x93d1:
    uVar14 = 0x100000004;
    break;
  case 0x93b2:
  case 0x93d2:
    uVar14 = 0x100000005;
    break;
  case 0x93b3:
  case 0x93d3:
    uVar14 = 0x100000005;
    goto code_r0x0001078e0038;
  case 0x93b4:
  case 0x93d4:
    uVar14 = 0x100000006;
    goto code_r0x0001078e0038;
  case 0x93b5:
  case 0x93d5:
    uVar14 = 0x100000005;
    goto code_r0x0001078e004c;
  case 0x93b6:
  case 0x93d6:
    uVar14 = 0x100000006;
    goto code_r0x0001078e004c;
  case 0x93b7:
  case 0x93d7:
    uVar14 = 0x100000008;
code_r0x0001078e004c:
    uVar15 = 0x100000001;
    psVar17 = (segment_command *)0x800000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93b8:
  case 0x93d8:
    uVar14 = 0x100000005;
    goto code_r0x0001078e0024;
  case 0x93b9:
  case 0x93d9:
    uVar14 = 0x100000006;
    goto code_r0x0001078e0024;
  case 0x93ba:
  case 0x93da:
    uVar14 = 0x100000008;
    goto code_r0x0001078e0024;
  case 0x93bb:
  case 0x93db:
    uVar14 = 0x10000000a;
code_r0x0001078e0024:
    uVar15 = 0x100000001;
    psVar17 = (segment_command *)0xa00000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93bc:
  case 0x93dc:
    uVar14 = 0x10000000a;
    goto code_r0x0001078dffd8;
  case 0x93bd:
  case 0x93dd:
    uVar14 = 0x10000000c;
code_r0x0001078dffd8:
    uVar15 = 0x100000001;
    psVar17 = (segment_command *)0xc00000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93c0:
  case 0x93e0:
    uVar15 = 0x100000001;
    uVar14 = 0x300000003;
    psVar17 = (segment_command *)0x300000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93c1:
  case 0x93e1:
    uVar14 = 0x300000003;
    goto code_r0x0001078dfea0;
  case 0x93c2:
  case 0x93e2:
    uVar14 = 0x300000004;
    goto code_r0x0001078dfea0;
  case 0x93c3:
  case 0x93e3:
    uVar14 = 0x400000004;
code_r0x0001078dfea0:
    uVar15 = 0x100000001;
    psVar17 = (segment_command *)0x400000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93c4:
  case 0x93e4:
    uVar14 = 0x400000004;
    break;
  case 0x93c5:
  case 0x93e5:
    uVar14 = 0x400000005;
    break;
  case 0x93c6:
  case 0x93e6:
    uVar14 = 0x500000005;
    break;
  case 0x93c7:
  case 0x93e7:
    uVar14 = 0x500000005;
    goto code_r0x0001078e0038;
  case 0x93c8:
  case 0x93e8:
    uVar14 = 0x500000006;
    goto code_r0x0001078e0038;
  case 0x93c9:
  case 0x93e9:
    uVar14 = 0x600000006;
code_r0x0001078e0038:
    uVar15 = 0x100000001;
    psVar17 = (segment_command *)0x600000080;
    uVar16 = 2;
    goto LAB_1078e0148;
  case 0x93f0:
LAB_1078e00a8:
    uVar15 = 0x100000001;
LAB_1078e00b0:
    uVar14 = 0x100000004;
    psVar17 = (segment_command *)0x800000040;
    uVar16 = 2;
    goto LAB_1078e0148;
  default:
    if (iVar1 == 0x9137) goto LAB_1078e00a8;
    if (iVar1 != 0x9138) goto LAB_1078e0334;
    goto LAB_1078dff20;
  }
  uVar15 = 0x100000001;
  psVar17 = (segment_command *)0x500000080;
  uVar16 = 2;
LAB_1078e0148:
  lVar10 = param_1[3];
  *(segment_command **)(lVar10 + 0x20) = psVar17;
  *(undefined8 *)(lVar10 + 0x18) = uVar16;
  *(undefined8 *)(lVar10 + 0x30) = uVar15;
  *(undefined8 *)(lVar10 + 0x28) = uVar14;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x20);
  *(uint *)(param_1 + 6) = (uint)uStack_c2;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  if (uStack_c2 == 3) {
    uVar14 = *(undefined8 *)(param_3 + 0x28);
LAB_1078e01a0:
    param_1[5] = uVar14;
  }
  else if (uStack_c2 == 2) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
  }
  else if (uStack_c2 == 1) {
    uVar14 = 0x100000001;
    goto LAB_1078e01a0;
  }
  uVar2 = *(uint *)(param_3 + 0x30);
  bVar4 = uVar2 != 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_1 + 7) = uVar2;
  *(bool *)(param_1 + 4) = bVar4;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)param_1 + 0x3c) = iVar1;
  *(bool *)((long)param_1 + 0x21) = iVar1 == 6;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_3 + 0x38);
  *(bool *)((long)param_1 + 0x22) = cStack_c4 != '\0';
  *(bool *)((long)param_1 + 0x23) = cStack_c3 != '\0';
  if (*(int *)(param_3 + 0xc) == 0x1020304) {
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(param_3 + 0x14);
  puVar9 = param_1 + 10;
  *puVar9 = 0;
  uVar2 = *(uint *)(param_3 + 0x3c);
  puVar13 = (uint *)(ulong)uVar2;
  if (uVar2 != 0) {
    if ((param_4 >> 2 & 1) == 0) {
      puVar7 = puVar13;
      _malloc();
      if (puVar7 == (uint *)0x0) goto LAB_1078e0334;
      puVar8 = puVar5 + 8;
      (*(code *)puVar5[8])(puVar8,puVar7,puVar13);
      if ((int)puVar8 != 0) goto LAB_1078e0334;
      if (*pcVar6 == '\x01') {
        puVar12 = puVar7;
        do {
          uVar3 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          *puVar12 = uVar3;
          puVar12 = (uint *)((long)puVar12 +
                            (ulong)(uint)(int)((float)(int)((float)uVar3 / 4.0) * 4.0));
        } while (puVar12 < (uint *)((long)puVar7 + (long)puVar13));
      }
      if ((param_4 >> 1 & 1) == 0) {
        puVar8 = puVar9;
        func_0x0001078dd788(puVar9,puVar13,puVar7);
        _free(puVar7);
        if ((int)puVar8 != 0) goto LAB_1078e0334;
        func_0x0001078dd4c8(puVar9,&UNK_10f4345af,&uStack_c0);
        if ((int)puVar9 == 0) {
          if (*(int *)(uStack_c0 + 0x10) == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(uStack_c0 + 0x18);
          }
          uStack_c0 = uStack_c0 & 0xffffffff00000000;
          _sscanf(uVar14,&UNK_10f4345be);
          iVar1 = *(int *)(param_1 + 6);
          if (iVar1 != 1) {
            if (iVar1 != 2) {
              if (iVar1 != 3) goto LAB_1078e02d0;
              *(int *)(param_1 + 9) = (int)uStack_c0._2_1_;
            }
            *(int *)((long)param_1 + 0x44) = (int)uStack_c0._1_1_;
          }
          *(int *)(param_1 + 8) = (int)(char)uStack_c0;
        }
      }
      else {
        *(uint *)(param_1 + 0xb) = uVar2;
        param_1[0xc] = puVar7;
      }
    }
    else {
      (*(code *)puVar5[9])(puVar5 + 8,puVar13);
    }
  }
LAB_1078e02d0:
  puVar9 = puVar5 + 8;
  (*(code *)puVar5[0xd])(puVar9,&lStack_d8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar5 + 8;
    (*(code *)puVar5[0xb])(puVar9,&lStack_d0);
    if ((int)puVar9 == 0) {
      param_1[0xd] = lStack_d8 - (lStack_d0 + (ulong)*(uint *)((long)param_1 + 0x34) * 4);
      if ((param_4 & 1) == 0) {
        return;
      }
      puVar5 = param_1;
      func_0x0001078e0464(param_1,0,0);
      if ((int)puVar5 == 0) {
        return;
      }
    }
  }
LAB_1078e0334:
  if (param_1[0x11] != 0) {
    _free();
  }
  lVar10 = param_1[3];
  uStack_78 = *(undefined8 *)(lVar10 + 0x88);
  lStack_80 = *(long *)(lVar10 + 0x80);
  uStack_68 = *(undefined8 *)(lVar10 + 0x98);
  uStack_70 = *(undefined8 *)(lVar10 + 0x90);
  uStack_60 = *(undefined8 *)(lVar10 + 0xa0);
  uStack_b8 = *(undefined8 *)(lVar10 + 0x48);
  uStack_c0 = *(undefined8 *)(lVar10 + 0x40);
  uStack_a8 = *(undefined8 *)(lVar10 + 0x58);
  uStack_b0 = *(undefined8 *)(lVar10 + 0x50);
  uStack_98 = *(undefined8 *)(lVar10 + 0x68);
  uStack_a0 = *(undefined8 *)(lVar10 + 0x60);
  uStack_88 = *(undefined8 *)(lVar10 + 0x78);
  pcStack_90 = *(code **)(lVar10 + 0x70);
  if (lStack_80 != 0) {
    (*pcStack_90)(&uStack_c0);
  }
  if (param_1[10] != 0) {
    func_0x0001078dd390();
  }
  if (param_1[0xc] != 0) {
    _free();
  }
  if (param_1[0xe] != 0) {
    _free();
  }
  _free(param_1[3]);
  return;
code_r0x0001078e0090:
  uVar15 = 0x200000002;
  goto LAB_1078dff28;
LAB_1078dff20:
  uVar15 = 0x100000001;
LAB_1078dff28:
  uVar14 = 0x100000004;
  psVar17 = (segment_command *)0x400000040;
  uVar16 = 2;
  goto LAB_1078e0148;
}



/* Entry: 1078e1264; end: 1078e129b;  */

undefined8 FUN_1078e1264(void)

{
  return 0;
}



/* Entry: 1078e24b4; end: 1078e2593;  */

ulong FUN_1078e24b4(long param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar3 = 0xb;
  if ((param_1 != 0) && (param_2 != (code *)0x0)) {
    if (*(int *)(param_1 + 0x88) == 0) {
      lVar4 = *(long *)(param_1 + 0xa0);
      uVar7 = (ulong)*(uint *)(param_1 + 0x34);
      do {
        uVar7 = uVar7 - 1;
        uVar6 = (uint)uVar7;
        if ((int)uVar6 < 0) {
          return 0;
        }
        uVar1 = *(uint *)(param_1 + 0x24) >> (ulong)(uVar6 & 0x1f);
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        uVar2 = *(uint *)(param_1 + 0x28) >> (ulong)(uVar6 & 0x1f);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar6 = *(uint *)(param_1 + 0x2c) >> (ulong)(uVar6 & 0x1f);
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        lVar5 = (uVar7 & 0x7fffffff) * 0x18;
        uVar3 = uVar7;
        (*param_2)(uVar7,0,uVar1,uVar2,uVar6,*(undefined8 *)(lVar4 + 0x30 + lVar5),
                   *(long *)(param_1 + 0x70) + *(long *)(*(long *)(param_1 + 0xa0) + lVar5 + 0x20),
                   param_3);
      } while ((int)uVar3 == 0);
    }
    else {
      uVar3 = 10;
    }
  }
  return uVar3;
}



/* Entry: 1078e3b9c; end: 1078e3ba3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1078e3b9c(long *param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
                  uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint6 uVar14;
  uint6 uVar15;
  code *pcVar16;
  undefined1 uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long ******pppppplVar21;
  long ****pppplVar22;
  long *******ppppppplVar23;
  undefined8 *extraout_x8;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 extraout_x8_00;
  long *******extraout_x8_01;
  long *******extraout_x8_02;
  long *******extraout_x8_03;
  long *******ppppppplVar26;
  long *plVar27;
  long lVar28;
  long *****ppppplVar29;
  int extraout_w9;
  ulong uVar30;
  long *****ppppplVar31;
  uint extraout_w11;
  long ******pppppplVar32;
  long *plVar33;
  long *****ppppplVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  long lVar39;
  long ******pppppplVar40;
  long *******ppppppplVar41;
  long *******ppppppplVar42;
  long *******ppppppplVar43;
  double dVar44;
  long *******ppppppplVar45;
  long *******ppppppplVar46;
  undefined1 auVar47 [16];
  double unaff_d8;
  double dVar48;
  double unaff_d9;
  double dVar49;
  double dVar50;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long ******pppppplStack_2e8;
  long ******pppppplStack_2e0;
  undefined8 uStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double adStack_288 [3];
  long *******ppppppplStack_270;
  undefined1 *puStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  undefined8 uStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  undefined8 uStack_200;
  double dStack_1f8;
  long *******ppppppplStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  double adStack_198 [2];
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined5 uStack_150;
  undefined3 uStack_14b;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_c8 [8];
  double dStack_c0;
  long *******ppppppplStack_b8;
  undefined8 uStack_a8;
  
  puVar19 = (undefined8 *)*param_1;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  if ((param_6 - 1 & param_6) != 0) {
    func_0x000107917e7c();
    func_0x00010002bf70();
    func_0x000107914d08();
code_r0x0001078e5068:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1078e506c);
    (*pcVar16)();
  }
  uVar37 = param_2 + (0x1fU - (int)LZCOUNT(param_6) & 0xff);
  uVar12 = *(uint *)puVar19[3] >> 0x14 & 0x1f;
  uVar17 = uVar37 == uVar12;
  if (uVar37 <= uVar12) {
    func_0x0001079161c4();
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_300 = 0;
    goto code_r0x0001078e500c;
  }
  func_0x000107916af4();
  uVar9 = (extraout_w9 + param_2) - extraout_w11;
  uVar12 = 1 << (ulong)((uVar9 & 0xff) - 1 & 0x1f);
  dVar49 = (double)uVar12;
  adStack_288[1] = 0.0;
  adStack_288[2] = 0.0;
  dVar50 = (unaff_d9 + 1.0) * dVar49;
  uStack_298 = 0x5a;
  uStack_290 = 0x1c;
  uStack_2a8 = 0;
  uStack_2a0 = 0x1c;
  uVar37 = 0;
  if (param_2 <= extraout_w11) {
    uVar37 = extraout_w11 - param_2;
  }
  ppppppplStack_2b8 = (long *******)0x0;
  ppppppplStack_2b0 = (long *******)0x0;
  adStack_288[0] = dVar50;
  func_0x0001078e63c8(&ppppppplStack_2b8);
  ppppppplStack_250 = (long *******)ABS(dVar50);
  ppppppplStack_260 = (long *******)(0.0 - (double)ppppppplStack_250);
  ppppppplStack_258 = ppppppplStack_260;
  ppppppplStack_248 = ppppppplStack_250;
  FUN_1078e64e0(&ppppppplStack_1f0,&ppppppplStack_260);
  ppppppplStack_1a8 = (long *******)0x0;
  ppppppplStack_1b0 = (long *******)0x0;
  adStack_198[0] = 0.0;
  ppppppplStack_1a0 = (long *******)0x0;
  ppppppplStack_1b8 = (long *******)0x0;
  ppppppplStack_1c0 = (long *******)0x0;
  adStack_198[1] = -NAN;
  uStack_188 = uStack_188 & 0xffffffffffff0000;
  plStack_178 = (long *)0x0;
  plStack_180 = (long *)0x0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_143 = 0;
  uStack_150 = 0;
  uStack_14b = 0;
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_118 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  uStack_108 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  func_0x000107916358();
  dStack_c0 = dVar50;
  ppppppplStack_b8 = (long *******)&ppppppplStack_1f0;
  func_0x0001078e8dd0(adStack_288 + 1,&ppppppplStack_1c0,adStack_288,&uStack_2a0);
  func_0x0001078e67d4(&ppppppplStack_1c0);
  func_0x0001078e6cd8(&ppppppplStack_1c0);
  FUN_1078e6f40(&ppppppplStack_1c0);
  func_0x0001078e6f98(ppppppplStack_1a8,ppppppplStack_1a0);
  func_0x0001078e6fbc(&ppppppplStack_1c0);
  func_0x0001078e7ee0(&ppppppplStack_1c0);
  ppppppplVar23 = (long *******)&ppppppplStack_1c0;
  func_0x0001078e8734(ppppppplVar23,&ppppppplStack_2b8);
  iVar36 = (int)(unaff_d9 + 0.5);
  iVar18 = (1 << (ulong)(uVar37 & 0x1f)) + iVar36 * 2;
  func_0x000107917110();
  ppppppplStack_2d0 = (long *******)0x0;
  ppppppplStack_2c8 = (long *******)0x0;
  ppppppplStack_2c0 = (long *******)0x0;
  if (iVar18 != 0) {
    func_0x0001078f6208(&ppppppplStack_1c0,iVar18 * iVar18,0,&ppppppplStack_2c0);
    func_0x000107917d74();
    ppppppplVar23 = (long *******)&ppppppplStack_1c0;
    func_0x0001078f625c();
  }
  dVar48 = unaff_d8 * dVar49;
  uVar37 = (extraout_w9 + param_2 & 0xff) - param_2;
  uVar4 = param_3 << (ulong)(uVar37 & 0x1f);
  uVar5 = param_4 << (ulong)(uVar37 & 0x1f);
  iVar10 = (uVar4 >> (ulong)(uVar9 & 0x1f)) - iVar36;
  uVar37 = (uVar5 >> (ulong)(uVar9 & 0x1f)) - iVar36;
  iVar36 = uVar37 + iVar18;
  ppppppplVar41 = (long *******)0x0;
  for (; (int)uVar37 < iVar36; uVar37 = uVar37 + 1) {
    for (iVar38 = iVar10; iVar38 < iVar10 + iVar18; iVar38 = iVar38 + 1) {
      if ((-1 < (int)uVar37) && ((int)uVar37 < (int)*(uint *)((long)puVar19 + 0x54))) {
        uVar1 = (*(uint *)((long)puVar19 + 0x54) & iVar38 >> 0x1f) + iVar38;
        uVar13 = *(uint *)puVar19[3] >> 0x10 & 0xf;
        uVar11 = (*(uint *)puVar19[3] >> 0x14 & 0x1f) - uVar13;
        uVar7 = uVar1 >> (ulong)(uVar11 & 0x1f);
        uVar11 = uVar37 >> (ulong)(uVar11 & 0x1f);
        ppppppplStack_1c0 =
             (long *******)CONCAT44(ppppppplStack_1c0._4_4_,(uVar11 << (ulong)uVar13) + uVar7);
        ppppppplVar23 = (long *******)(puVar19 + 4);
        func_0x00010736de50(ppppppplVar23,&ppppppplStack_1c0);
        if (ppppppplVar23 != (long *******)0x0) {
          puVar24 = puVar19;
          if (*(char *)((long)puVar19 + 0x17) < '\0') {
            puVar24 = (undefined8 *)*puVar19;
          }
          uVar7 = (uVar1 - (uVar7 << (ulong)(*(byte *)(puVar19 + 9) & 0x1f))) +
                  (uVar37 - (uVar11 << (ulong)(*(byte *)(puVar19 + 9) & 0x1f))) *
                  *(int *)((long)puVar19 + 0x4c);
          if ((*(ulong *)((long)puVar24 +
                         (ulong)(uVar7 >> 6) * 8 + (ulong)*(uint *)((long)ppppppplVar23 + 0x14)) >>
               ((ulong)uVar7 & 0x3f) & 1) != 0) {
            uVar25 = (ulong)uVar37 + 0x9e3779b97f4a7c15 + ((ulong)uVar1 << 0x20);
            uVar25 = (uVar25 ^ uVar25 >> 0x1e) * -0x40a7b892e31b1a47;
            uVar25 = (uVar25 ^ uVar25 >> 0x1b) * -0x6b2fb644ecceee15;
            uVar25 = uVar25 ^ uVar25 >> 0x1f;
            iVar6 = -iVar38;
            if (-1 < iVar38) {
              iVar6 = iVar38;
            }
            iVar6 = iVar6 << (ulong)(uVar9 & 0x1f);
            iVar2 = -iVar6;
            if (-1 < iVar38) {
              iVar2 = iVar6;
            }
            ppppppplVar41 =
                 (long *******)
                 (dVar48 * -0.5 + dVar48 * ((double)(uVar25 & 0xffffffff) / 4294967295.0) +
                 (double)(int)((uVar12 - uVar4) + iVar2));
            adStack_198[0] =
                 dVar48 * -0.5 + dVar48 * ((double)(uVar25 >> 0x20) / 4294967295.0) +
                 (double)(int)((uVar12 - uVar5) + (uVar37 << (ulong)(uVar9 & 0x1f)));
            ppppppplStack_1b8 = (long *******)0x0;
            ppppppplStack_1c0 = (long *******)0x3ff0000000000000;
            ppppppplStack_1a0 = (long *******)0x3ff0000000000000;
            ppppppplStack_1a8 = (long *******)0x0;
            adStack_198[1] = 0.0;
            uStack_188 = 0;
            plStack_180 = (long *)0x3ff0000000000000;
            ppppppplStack_1b0 = ppppppplVar41;
            if (ppppppplStack_2c8 < ppppppplStack_2c0) {
              *ppppppplStack_2c8 = (long ******)0x0;
              ppppppplStack_2c8[1] = (long ******)0x0;
              ppppppplVar45 = ppppppplStack_2c8 + 3;
              ppppppplStack_2c8[2] = (long ******)0x0;
            }
            else {
              lVar39 = ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18;
              uVar25 = lVar39 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar25) {
                func_0x0001078f6188();
                goto code_r0x0001078e5068;
              }
              uVar8 = ((long)ppppppplStack_2c0 - (long)ppppppplStack_2d0) / 0x18;
              uVar30 = uVar8 * 2;
              if (uVar30 < uVar25 || uVar30 - uVar25 == 0) {
                uVar30 = uVar25;
              }
              if (0x555555555555554 < uVar8) {
                uVar30 = 0xaaaaaaaaaaaaaaa;
              }
              func_0x0001078f6208(&ppppppplStack_1f0,uVar30,lVar39,&ppppppplStack_2c0);
              uStack_1e0[1] = 0;
              uStack_1e0[2] = 0;
              *uStack_1e0 = 0;
              uStack_1e0 = uStack_1e0 + 3;
              func_0x0001078f6194(&ppppppplStack_2d0,&ppppppplStack_1f0);
              ppppppplVar45 = ppppppplStack_2c8;
              func_0x0001078f625c(&ppppppplStack_1f0);
            }
            ppppppplVar42 = ppppppplVar45 + -3;
            ppppppplVar23 = ppppppplVar42;
            ppppppplStack_2c8 = ppppppplVar45;
            func_0x0001078f629c(ppppppplVar42,
                                ((long)ppppppplStack_2b0 - (long)ppppppplStack_2b8) / 0x30);
            pppppplVar40 = *ppppppplVar42;
            for (ppppppplVar45 = ppppppplStack_2b8; ppppppplVar45 != ppppppplStack_2b0;
                ppppppplVar45 = ppppppplVar45 + 6) {
              func_0x0001078f6400(pppppplVar40);
              ppppppplVar23 = ppppppplVar45;
              func_0x0001078f638c(ppppppplVar45,pppppplVar40,&ppppppplStack_1c0);
              if ((int)ppppppplVar23 == 0) break;
              ppppppplVar23 = (long *******)(pppppplVar40 + 3);
              func_0x0001078f4654(ppppppplVar23,
                                  ((long)ppppppplVar45[4] - (long)ppppppplVar45[3]) / 0x18);
              for (pppppplVar32 = ppppppplVar45[3]; pppppplVar32 != ppppppplVar45[4];
                  pppppplVar32 = pppppplVar32 + 3) {
                func_0x000107914d7c();
                func_0x0001078f638c();
                if ((int)ppppppplVar23 == 0) goto code_r0x0001078e40b0;
              }
              pppppplVar40 = pppppplVar40 + 6;
            }
          }
        }
      }
code_r0x0001078e40b0:
    }
  }
  if (ppppppplStack_2d0 == ppppppplStack_2c8) {
    lStack_318 = 0;
    lStack_310 = 0;
    uStack_308 = 0;
  }
  else {
    if (1 < (ulong)(((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18)) {
      uVar25 = 1;
      do {
        lVar39 = 0;
        uVar30 = uVar25 * 2;
        do {
          func_0x000107916984();
          uVar20 = extraout_x8_00;
          func_0x0001078f6428();
          ppppppplVar23 = ppppppplStack_2d0;
          func_0x0001078f6428(ppppppplStack_2d0,ppppppplStack_2c8,uVar25 + lVar39);
          ppppppplVar45 = ppppppplVar23;
          func_0x000107914d7c();
          func_0x0001078f6454();
          ppppppplVar42 = ppppppplVar45;
          func_0x000107915320();
          func_0x0001078f6454();
          if (((int)ppppppplVar45 == 0) || (((ulong)ppppppplVar42 & 1) == 0)) {
            if ((int)ppppppplVar45 == 0) {
              func_0x000107914d7c();
              FUN_1078f64c8();
              if (((ulong)ppppppplVar42 & 1) == 0) {
                FUN_1078f64c8(*ppppppplVar23,ppppppplVar23[1],&ppppppplStack_1f0);
                func_0x0001078edab0(&ppppppplStack_260,&ppppppplStack_1f0);
              }
            }
            else {
              func_0x000107915320();
              FUN_1078f64c8();
            }
            func_0x0001078e652c(&ppppppplStack_260,&ppppppplStack_1f0,&ppppppplStack_228,
                                &ppppppplStack_240);
            ppppppplVar41 = ppppppplStack_240;
          }
          ppppppplStack_1b8 = (long *******)CONCAT44(uStack_1e4,uStack_1e8);
          ppppppplStack_1c0 = ppppppplStack_1f0;
          ppppppplStack_1a8 = ppppppplStack_220;
          ppppppplStack_1b0 = ppppppplStack_228;
          ppppppplStack_1a0 = ppppppplVar41;
          func_0x0001078f6640(uVar20,ppppppplVar23,&ppppppplStack_1c0,&ppppppplStack_210,
                              &ppppppplStack_260,&ppppppplStack_1f0);
          ppppppplVar23 = ppppppplStack_2d0;
          func_0x0001078f6428(ppppppplStack_2d0,ppppppplStack_2c8,lVar39);
          if (*ppppppplVar23 != (long ******)0x0) {
            func_0x0001078e63c8(ppppppplVar23);
            func_0x000107915b14();
            func_0x00010791778c();
          }
          ppppppplVar23[1] = (long ******)ppppppplStack_208;
          *ppppppplVar23 = (long ******)ppppppplStack_210;
          ppppppplVar23[2] = (long ******)uStack_200;
          ppppppplVar41 = ppppppplStack_210;
          func_0x000107916984();
          lVar39 = lVar39 + uVar30;
          ppppppplVar23 = (long *******)&ppppppplStack_210;
          func_0x000107912734();
          uVar8 = ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18;
        } while (uVar25 + lVar39 < uVar8);
        uVar25 = uVar30;
      } while (uVar30 < uVar8);
    }
    ppppppplVar41 = ppppppplStack_2c8;
    if ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0 == 0) {
      if (ppppppplStack_2c0 == ppppppplStack_2d0) {
        ppppppplStack_1a0 = (long *******)&ppppppplStack_2c0;
        func_0x000107917234();
        ppppppplStack_1b8 = ppppppplVar23;
        ppppppplVar23[1] = (long ******)0x0;
        ppppppplVar23[2] = (long ******)0x0;
        ppppppplStack_1c0 = ppppppplVar23;
        *ppppppplVar23 = (long ******)0x0;
        ppppppplStack_1b0 = ppppppplVar23 + 3;
        ppppppplStack_1a8 = ppppppplVar23 + 3;
        func_0x000107917d74();
        func_0x0001078f625c(&ppppppplStack_1c0);
      }
      else {
        *ppppppplStack_2c8 = (long ******)0x0;
        ppppppplStack_2c8[1] = (long ******)0x0;
        ppppppplStack_2c8[2] = (long ******)0x0;
        ppppppplStack_2c8 = ppppppplStack_2c8 + 3;
      }
    }
    else if (1 < (ulong)(((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18)) {
      ppppppplVar41 = ppppppplStack_2d0 + 3;
      func_0x000107901640(&ppppppplStack_2d0);
    }
    ppppppplVar23 = ppppppplStack_2d0;
    ppppppplVar42 = (long *******)(dVar50 - dVar49);
    ppppppplVar43 = (long *******)0x0;
    pppppplStack_2e8 = (long ******)0x0;
    pppppplStack_2e0 = (long ******)0x0;
    uStack_2d8 = 0;
    ppppppplVar46 = (long *******)0x0;
    dVar49 = -((double)ppppppplRam0000000113726a68 * (double)ppppppplVar42);
    uVar25 = 0;
    ppppppplVar45 = ppppppplRam0000000113726a68;
    adStack_288[0] = dVar49;
    func_0x0001078e63c8();
    pppppplVar40 = *ppppppplVar23;
    pppppplVar32 = ppppppplVar23[1];
    func_0x000107917768();
    func_0x0001078f6454();
    if ((uVar25 & 1) == 0) {
      ppppppplStack_1f0 = (long *******)((ulong)ppppppplStack_1f0 & 0xffffffffffffff00);
      func_0x0001079160e0();
      for (; pppppplVar40 != pppppplVar32; pppppplVar40 = pppppplVar40 + 6) {
        pppppplVar21 = pppppplVar40;
        func_0x0001078f6498();
        if (((ulong)pppppplVar21 & 1) == 0) {
          if (*pppppplVar40 == pppppplVar40[1]) {
            ppppplVar34 = pppppplVar40[3];
            ppppplVar31 = pppppplVar40[4];
            ppppppplStack_1c0 = (long *******)((ulong)ppppppplStack_1c0 & 0xffffffffffffff00);
            for (; ppppplVar34 != ppppplVar31; ppppplVar34 = ppppplVar34 + 3) {
              if (*ppppplVar34 != ppppplVar34[1]) {
                FUN_107901674(*ppppplVar34,ppppplVar34[1],&ppppppplStack_260);
                func_0x0001078f65c4(&ppppppplStack_1c0,&ppppppplStack_260);
              }
            }
            ppppppplStack_260 = ppppppplVar45;
            ppppppplStack_258 = ppppppplVar46;
            ppppppplStack_250 = ppppppplVar42;
            ppppppplStack_248 = ppppppplVar43;
            if ((char)ppppppplStack_1c0 == '\x01') {
              ppppppplStack_258 = ppppppplStack_1b0;
              ppppppplStack_260 = ppppppplStack_1b8;
              ppppppplStack_248 = ppppppplStack_1a0;
              ppppppplStack_250 = ppppppplStack_1a8;
            }
          }
          else {
            FUN_107901674(*pppppplVar40,pppppplVar40[1],&ppppppplStack_260);
          }
          func_0x0001078f65c4(&ppppppplStack_1f0,&ppppppplStack_260);
        }
      }
      if ((char)ppppppplStack_1f0 == '\x01') {
        dVar50 = (double)CONCAT44(uStack_1e4,uStack_1e8);
        dVar44 = (double)CONCAT44(uStack_1cc,uStack_1d0);
        dVar48 = (double)CONCAT44(uStack_1d4,uStack_1d8);
        puVar19 = uStack_1e0;
      }
      else {
        dVar48 = -1.79769313486232e+308;
        dVar44 = -1.79769313486232e+308;
        dVar50 = 1.79769313486232e+308;
        puVar19 = (undefined8 *)0x7fefffffffffffff;
      }
      dStack_1f8 = ABS(dVar49);
      ppppppplVar42 = (long *******)(dVar50 - dStack_1f8);
      ppppppplVar43 = (long *******)((double)puVar19 - dStack_1f8);
      uStack_200 = (long *******)(dStack_1f8 + dVar48);
      dStack_1f8 = dStack_1f8 + dVar44;
      ppppppplStack_210 = ppppppplVar42;
      ppppppplStack_208 = ppppppplVar43;
      FUN_1078e64e0(&ppppppplStack_1f0,&ppppppplStack_210);
      ppppppplStack_1a8 = (long *******)0x0;
      ppppppplStack_1b0 = (long *******)0x0;
      adStack_198[0] = 0.0;
      ppppppplStack_1a0 = (long *******)0x0;
      ppppppplStack_1b8 = (long *******)0x0;
      ppppppplStack_1c0 = (long *******)0x0;
      adStack_198[1] = -NAN;
      uStack_188 = uStack_188 & 0xffffffffffff0000;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_143 = 0;
      uStack_150 = 0;
      uStack_14b = 0;
      puStack_138 = (undefined8 *)0x0;
      uStack_140 = 0;
      uStack_128 = 0;
      puStack_130 = (undefined8 *)0x0;
      ppppppplVar41 = (long *******)0xffffffffffffffff;
      ppppppplVar45 = (long *******)0xffffffffffffffff;
      uStack_118 = 0xffffffffffffffff;
      uStack_120 = 0xffffffffffffffff;
      uStack_108 = 0xffffffffffffffff;
      uStack_110 = 0xffffffffffffffff;
      func_0x000107916358();
      dStack_c0 = dVar49;
      ppppppplStack_b8 = (long *******)&ppppppplStack_1f0;
      for (pppppplVar40 = *ppppppplVar23; uVar17 = ppppppplVar23[1] <= pppppplVar40,
          pppppplVar40 != ppppppplVar23[1]; pppppplVar40 = pppppplVar40 + 6) {
        func_0x0001078e8f24(&ppppppplStack_1c0,dVar49 < 0.0);
        ppppplVar34 = *pppppplVar40;
        func_0x0001079161f0(ppppplVar34,pppppplVar40[1]);
        func_0x000107901aa4(&ppppppplStack_1c0,ppppplVar34,pppppplVar40,0,
                            pppppplVar40[4] != pppppplVar40[3]);
        ppppplVar31 = pppppplVar40[4];
        for (ppppplVar34 = pppppplVar40[3]; ppppplVar34 != ppppplVar31;
            ppppplVar34 = ppppplVar34 + 3) {
          func_0x0001078e8f24(&ppppppplStack_1c0,0.0 <= dVar49);
          pppplVar22 = *ppppplVar34;
          func_0x0001079161f0(pppplVar22,ppppplVar34[1]);
          func_0x000107901aa4(&ppppppplStack_1c0,pppplVar22,ppppplVar34,1,0);
        }
      }
      func_0x0001078e67d4(&ppppppplStack_1c0);
      ppppppplVar23 = ppppppplStack_1a8;
      puStack_268 = auStack_c8;
      ppppppplStack_270 = (long *******)&ppppppplStack_1a8;
      func_0x000107917008(ppppppplStack_1a0);
      ppppppplVar46 = extraout_x8_01;
      if ((bool)uVar17) {
        func_0x000107917008();
        ppppppplVar46 = extraout_x8_02;
        if (!(bool)uVar17) goto code_r0x0001078e45bc;
        ppppppplStack_228 = (long *******)0x0;
        ppppppplStack_220 = (long *******)0x0;
        uStack_218 = 0;
        ppppppplStack_240 = (long *******)0x0;
        uStack_238 = 0;
        uStack_230 = 0;
        func_0x000107916078();
        ppppppplVar26 = extraout_x8_03;
        ppppppplStack_260 = ppppppplVar41;
        ppppppplStack_258 = ppppppplVar45;
        ppppppplStack_250 = ppppppplVar42;
        ppppppplStack_248 = ppppppplVar43;
        for (ppppppplVar46 = ppppppplVar23; plVar27 = plStack_168, plVar33 = plStack_168,
            ppppppplVar46 != ppppppplVar26; ppppppplVar46 = ppppppplVar46 + 0x36) {
          if (*(char *)(ppppppplVar46 + 0x34) == '\x01') {
            func_0x0001078e9c18(&ppppppplStack_260,ppppppplVar46);
            func_0x0001078eda1c(&ppppppplStack_228,ppppppplVar23);
            ppppppplVar26 = ppppppplStack_1a0;
          }
          ppppppplVar23 = ppppppplVar23 + 0x36;
        }
        for (; plVar27 != plStack_160; plVar27 = plVar27 + 0xb) {
          func_0x000107917f50(&ppppppplStack_260);
          func_0x000107902bb0(&ppppppplStack_240,plVar33);
          plVar33 = plVar33 + 0xb;
        }
        func_0x0001079027cc(&ppppppplStack_260,&ppppppplStack_228,&ppppppplStack_240,0,
                            &ppppppplStack_270);
        func_0x000107902fd8(&ppppppplStack_240);
        func_0x0001078ee0a0(&ppppppplStack_228);
        ppppppplVar41 = ppppppplStack_1a8;
        ppppppplVar46 = ppppppplStack_1a0;
      }
      else {
code_r0x0001078e45bc:
        for (; ppppppplVar41 = ppppppplStack_1a8, plVar27 = plStack_168,
            ppppppplVar23 != ppppppplVar46; ppppppplVar23 = ppppppplVar23 + 0x36) {
          for (; plVar27 != plStack_160; plVar27 = plVar27 + 0xb) {
            func_0x0001079029d8(&ppppppplStack_1a8,ppppppplVar23,plVar27);
          }
          ppppppplVar46 = ppppppplStack_1a0;
        }
      }
      for (; ppppppplVar41 != ppppppplVar46; ppppppplVar41 = ppppppplVar41 + 0x36) {
        if (*(char *)(ppppppplVar41 + 0x34) == '\x01') {
          if (0.0 <= dStack_c0) {
            if (0 < (long)ppppppplVar41[0x35]) goto code_r0x0001078e4668;
          }
          else if ((long)ppppppplVar41[0x35] < 1) {
code_r0x0001078e4668:
            *(undefined1 *)(ppppppplVar41 + 0x34) = 0;
          }
        }
      }
      dVar50 = dStack_c0;
      func_0x0001078e6cd8(&ppppppplStack_1c0);
      FUN_1078e6f40(&ppppppplStack_1c0);
      func_0x0001078e6f98(ppppppplStack_1a8,ppppppplStack_1a0);
      func_0x0001078e6fbc(&ppppppplStack_1c0);
      ppppppplVar23 = ppppppplStack_1a8;
      if (uStack_188._1_1_ == '\x01') {
        for (; ppppppplVar23 != ppppppplStack_1a0; ppppppplVar23 = ppppppplVar23 + 0x36) {
          if (*(char *)(ppppppplVar23 + 0x34) == '\x01') {
            pppppplVar40 = ppppppplVar23[0x33];
            for (lVar39 = 0; lVar39 != 0x170; lVar39 = lVar39 + 0xb8) {
              pppppplVar32 = *(long *******)((long)ppppppplVar23 + lVar39 + 0x88);
              if (pppppplVar32 == (long ******)0xffffffffffffffff) {
                pppppplVar32 = *(long *******)((long)ppppppplVar23 + lVar39 + 0x80);
              }
              if ((pppppplVar32 == pppppplVar40) &&
                 (*(char *)((long)ppppppplStack_1c0 +
                           *(long *)((long)ppppppplVar23 + lVar39 + 0x50) * 0x100 + 0x5a) == '\x01')
                 ) {
                *(undefined1 *)((long)ppppppplVar23 + lVar39 + 0x90) = 0;
              }
            }
          }
        }
      }
      func_0x0001078e7ee0(&ppppppplStack_1c0);
      plVar27 = plStack_180;
      if (dVar49 < 0.0) {
        for (; puVar19 = puStack_138, plVar27 != plStack_178; plVar27 = plVar27 + 4) {
          if (((*(byte *)((long)plVar27 + 0x1a) & 1) == 0) &&
             ((*(byte *)((long)plVar27 + 0x19) & 1) == 0)) {
            func_0x0001078f47a4(*plVar27,plVar27[1]);
          }
        }
        for (; plVar27 = plStack_180, puVar19 != puStack_130; puVar19 = puVar19 + 3) {
          func_0x0001078f47a4(*puVar19,puVar19[1]);
        }
        for (; plVar27 != plStack_178; plVar27 = plVar27 + 4) {
          if ((((*(byte *)((long)plVar27 + 0x1a) & 1) == 0) &&
              ((*(byte *)((long)plVar27 + 0x19) & 1) == 0)) && (plVar27[1] != *plVar27)) {
            func_0x0001078f47f8(*plVar27);
            if (dVar50 < 0.0) {
              lVar39 = 0;
              for (plVar33 = plStack_168; plVar33 != plStack_160; plVar33 = plVar33 + 0xb) {
                if (*plVar33 != plVar33[1]) {
                  iVar18 = (int)plVar33 + 0x18;
                  func_0x000107914c6c();
                  func_0x0001078edf30();
                  if (iVar18 != 0) {
                    func_0x000107914c6c();
                    func_0x000107914d7c();
                    func_0x0001078f4838();
                    if (iVar18 != -1) {
                      if ((char)plVar33[10] == '\x01') {
                        lVar39 = lVar39 + -1;
                      }
                      else {
                        if (*(char *)((long)plVar33 + 0x51) != '\x01') goto code_r0x0001078e4830;
                        lVar39 = lVar39 + 1;
                      }
                    }
                  }
                }
              }
              if (lVar39 < 1) {
                *(undefined1 *)((long)plVar27 + 0x1b) = 1;
              }
            }
          }
code_r0x0001078e4830:
        }
      }
      ppppppplVar41 = &pppppplStack_2e8;
      func_0x0001078e8734(&ppppppplStack_1c0);
      func_0x000107917110();
    }
    ppppppplStack_260 = (long *******)0x0;
    ppppppplStack_258 = (long *******)0x0;
    ppppppplStack_250 = (long *******)0x0;
    lVar39 = (long)pppppplStack_2e0 - (long)pppppplStack_2e8;
    pppppplVar40 = pppppplStack_2e8;
    ppppppplVar23 = ppppppplStack_260;
    if (lVar39 != 0) {
      ppppppplVar23 = (long *******)&ppppppplStack_260;
      func_0x000107903050(ppppppplVar23,lVar39 / 0x30);
      FUN_1079030e0(&ppppppplStack_1c0,ppppppplVar23,
                    ((long)ppppppplStack_258 - (long)ppppppplStack_260) / 0x30,&ppppppplStack_250);
      ppppppplVar23 = (long *******)((long)ppppppplStack_1b0 + lVar39);
      for (; lVar39 != 0; lVar39 = lVar39 + -0x30) {
        ppppppplStack_1b0[3] = (long ******)0x0;
        ppppppplStack_1b0[2] = (long ******)0x0;
        ppppppplStack_1b0[5] = (long ******)0x0;
        ppppppplStack_1b0[4] = (long ******)0x0;
        ppppppplStack_1b0[1] = (long ******)0x0;
        *ppppppplStack_1b0 = (long ******)0x0;
        ppppppplStack_1b0 = ppppppplStack_1b0 + 6;
      }
      ppppppplVar41 = (long *******)&ppppppplStack_1c0;
      ppppppplStack_1b0 = ppppppplVar23;
      func_0x00010790307c(&ppppppplStack_260);
      func_0x000107903128(&ppppppplStack_1c0);
      pppppplVar40 = pppppplStack_2e8;
      ppppppplVar23 = ppppppplStack_260;
    }
    for (; ppppppplVar45 = ppppppplStack_258, ppppppplVar42 = ppppppplStack_260,
        pppppplVar40 != pppppplStack_2e0; pppppplVar40 = pppppplVar40 + 6) {
      func_0x0001079031ec(ppppppplVar23 + 3);
      ppppppplVar23[1] = *ppppppplVar23;
      func_0x00010790319c(pppppplVar40,ppppppplVar23);
      ppppppplVar41 = (long *******)(((long)pppppplVar40[4] - (long)pppppplVar40[3]) / 0x18);
      func_0x0001079033b4(ppppppplVar23 + 3);
      for (ppppplVar34 = pppppplVar40[3]; ppppplVar34 != pppppplVar40[4];
          ppppplVar34 = ppppplVar34 + 3) {
        func_0x000107914d7c();
        func_0x00010790319c();
      }
      ppppppplVar23 = ppppppplVar23 + 6;
    }
    for (; ppppppplVar42 != ppppppplVar45; ppppppplVar42 = ppppppplVar42 + 6) {
      ppppppplVar41 = (long *******)*ppppppplVar42;
      func_0x0001078e630c(ppppppplVar41,ppppppplVar42[1]);
      func_0x0001078e6378(ppppppplVar42,ppppppplVar41,ppppppplVar42[1]);
      pppppplVar32 = ppppppplVar42[4];
      for (pppppplVar40 = ppppppplVar42[3]; pppppplVar40 != pppppplVar32;
          pppppplVar40 = pppppplVar40 + 3) {
        ppppppplVar41 = (long *******)*pppppplVar40;
        func_0x0001078e630c(ppppppplVar41,pppppplVar40[1]);
        func_0x0001078e6378(pppppplVar40,ppppppplVar41,pppppplVar40[1]);
      }
    }
    ppppppplStack_1f0 = (long *******)0x0;
    uVar14 = CONCAT24((short)param_6,param_6) & 0xffff0000ffff;
    uVar15 = CONCAT24((short)param_6,param_6) & 0xffff0000ffff;
    uStack_1e0._4_4_ = (undefined4)uVar15;
    uStack_1d8 = (uint)(ushort)(uVar15 >> 0x20);
    uStack_1e4 = (undefined4)uVar14;
    uStack_1e0._0_4_ = (uint)(ushort)(uVar14 >> 0x20);
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1cc = 0;
    ppppppplStack_208 = (long *******)0x0;
    uStack_200 = (long *******)0x0;
    ppppppplStack_210 = (long *******)0x0;
    ppppppplStack_228 = (long *******)&ppppppplStack_210;
    ppppppplStack_220 = (long *******)((ulong)ppppppplStack_220 & 0xffffffffffffff00);
    ppppppplVar23 = (long *******)0x5;
    func_0x000107903354();
    lVar28 = 0;
    uStack_200 = ppppppplVar23 + (long)ppppppplVar41;
    for (lVar39 = 0; lVar39 != 0x28; lVar39 = lVar39 + 8) {
      *(undefined8 *)((long)ppppppplVar23 + lVar39) =
           *(undefined8 *)((long)&ppppppplStack_1f0 + lVar39);
      lVar28 = lVar28 + -8;
    }
    ppppppplStack_208 = (long *******)((long)ppppppplVar23 - lVar28);
    ppppppplStack_220._0_1_ = 1;
    ppppppplStack_210 = ppppppplVar23;
    func_0x000107903618(&ppppppplStack_228);
    FUN_107903654(&ppppppplStack_1c0,&ppppppplStack_210);
    ppppppplStack_228 = (long *******)&ppppppplStack_1a8;
    ppppppplStack_1a8 = (long *******)0x0;
    ppppppplStack_1a0 = (long *******)0x0;
    adStack_198[0] = 0.0;
    ppppppplStack_220 = (long *******)CONCAT71(ppppppplStack_220._1_7_,1);
    func_0x0001079036dc(&ppppppplStack_228);
    func_0x000107903640(&ppppppplStack_210);
    lStack_310 = 0;
    uStack_308 = 0;
    lStack_318 = 0;
    func_0x000107903738(&ppppppplStack_1c0,&ppppppplStack_260,&ppppppplStack_210,&lStack_318,
                        &ppppppplStack_228,&ppppppplStack_1f0);
    func_0x0001079126fc(&ppppppplStack_1c0);
    func_0x000107912f54(&ppppppplStack_260);
    func_0x000107912734(&pppppplStack_2e8);
  }
  func_0x000107912764(&ppppppplStack_2d0);
  func_0x000107912734(&ppppppplStack_2b8);
  uVar17 = lStack_318 == lStack_310;
  if ((bool)uVar17) {
    func_0x00010002b838(extraout_x8,"");
  }
  else {
    if (param_7 == 0) {
      ppppppplStack_260 = (long *******)0x0;
      ppppppplStack_258 = (long *******)0x0;
      ppppppplStack_250 = (long *******)0x0;
      ppppppplVar23 = (long *******)0x120;
      __Znwm();
      ppppppplVar23[3] = (long ******)0x0;
      ppppppplVar23[2] = (long ******)0x0;
      ppppppplVar23[9] = (long ******)0x0;
      ppppppplVar23[8] = (long ******)0x0;
      ppppppplVar41 = ppppppplVar23 + 0xb;
      *ppppppplVar41 = (long ******)(ppppppplVar23 + 2);
      ppppppplVar23[10] = (long ******)0x0;
      ppppppplVar23[5] = (long ******)0x0;
      ppppppplVar23[4] = (long ******)0x0;
      ppppppplVar23[7] = (long ******)0x0;
      ppppppplVar23[6] = (long ******)0x0;
      ppppppplVar23[1] = (long ******)0x0;
      *ppppppplVar23 = (long ******)0x0;
      ppppppplVar23[0xd] = (long ******)0x0;
      ppppppplVar23[0xe] = (long ******)0x0;
      ppppppplVar23[0xf] = (long ******)(ppppppplVar23 + 5);
      ppppppplVar23[0xc] = (long ******)0x0;
      ppppppplVar23[0x11] = (long ******)0x0;
      ppppppplVar23[0x12] = (long ******)0x0;
      ppppppplVar23[0x13] = (long ******)(ppppppplVar23 + 8);
      ppppppplVar23[0x10] = (long ******)0x0;
      ppppppplVar23[0x15] = (long ******)0x0;
      ppppppplVar23[0x14] = (long ******)0x0;
      ppppppplVar23[0x17] = (long ******)0x0;
      ppppppplVar23[0x16] = (long ******)0x0;
      ppppppplVar23[0x20] = (long ******)0x0;
      ppppppplVar23[0x1f] = (long ******)0x0;
      ppppppplVar23[0x18] = (long ******)0x2;
      ppppppplVar23[0x1b] = (long ******)0x0;
      ppppppplVar23[0x1a] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar23 + 0x19) = 0;
      ppppppplVar23[0x1d] = (long ******)0x0;
      ppppppplVar23[0x1c] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar23 + 0x1e) = 0x3f800000;
      ppppppplVar23[0x22] = (long ******)0x0;
      ppppppplVar23[0x21] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar23 + 0x23) = 0x3f800000;
      func_0x000107912b14(ppppppplVar41,0xf,2);
      uVar25 = param_5[1];
      puVar19 = (undefined8 *)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar25 = (ulong)*(byte *)((long)param_5 + 0x17);
        puVar19 = param_5;
      }
      func_0x000107912b90(ppppppplVar41,1,puVar19,uVar25);
      func_0x000107912b14(ppppppplVar41,5,param_6);
      ppppppplVar45 = (long *******)0x8;
      __Znwm();
      ppppppplStack_258 = ppppppplVar45 + 1;
      *ppppppplVar45 = (long ******)ppppppplVar23;
      ppppppplStack_260 = ppppppplVar45;
      ppppppplStack_250 = ppppppplStack_258;
      ppppppplStack_1c0 = ppppppplVar23;
      func_0x000107912dd0(&ppppppplStack_1b8,ppppppplVar41,2);
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_14b = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      uStack_188 = 0;
      adStack_198[1] = 0.0;
      adStack_198[0] = 0.0;
      func_0x000107912b14(&ppppppplStack_1b8,3,3);
      lVar28 = lStack_310;
      for (lVar39 = lStack_318; uVar17 = lVar39 == lVar28, !(bool)uVar17; lVar39 = lVar39 + 0x30) {
        func_0x000107912988(&ppppppplStack_1c0,lVar39);
        lVar3 = *(long *)(lVar39 + 0x20);
        for (lVar35 = *(long *)(lVar39 + 0x18); lVar35 != lVar3; lVar35 = lVar35 + 0x18) {
          func_0x000107912988(&ppppppplStack_1c0,lVar35);
        }
      }
      if (ppppppplStack_1b8 != (long *******)0x0) {
        if (plStack_178 != (long *)0x0) {
          func_0x000107912ea4(&plStack_178);
        }
        if (adStack_198[0] != 0.0) {
          func_0x000107912ea4(adStack_198);
        }
        func_0x000107912ea4(&ppppppplStack_1b8);
        ppppppplStack_1c0[0x17] = (long ******)((long)ppppppplStack_1c0[0x17] + 1);
      }
      func_0x000107916984();
      pppppplVar40 = *ppppppplVar45;
      if (*pppppplVar40 == (long *****)0x0) {
        ppppplVar34 = (long *****)(long)*(char *)((long)pppppplVar40 + 0x27);
        if ((long)ppppplVar34 < 0) {
          ppppplVar34 = pppppplVar40[3];
        }
        ppppplVar31 = (long *****)(long)*(char *)((long)pppppplVar40 + 0x3f);
        if ((long)ppppplVar31 < 0) {
          ppppplVar31 = pppppplVar40[6];
        }
        ppppplVar29 = (long *****)(long)*(char *)((long)pppppplVar40 + 0x57);
        if ((long)ppppplVar29 < 0) {
          ppppplVar29 = pppppplVar40[9];
        }
        ppppplVar29 = (long *****)((long)ppppplVar31 + (long)ppppplVar34 + (long)ppppplVar29);
      }
      else {
        ppppplVar29 = pppppplVar40[1];
      }
      ppppppplStack_1f0 = (long *******)&ppppppplStack_210;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      func_0x000107912e38(&ppppppplStack_210,ppppplVar29 + 1);
      pppppplVar40 = *ppppppplVar45;
      if (*pppppplVar40 == (long *****)0x0) {
        if (pppppplVar40[0x17] != (long *****)0x0) {
          ppppplVar34 = pppppplVar40[3];
          if (-1 < (char)*(byte *)((long)pppppplVar40 + 0x27)) {
            ppppplVar34 = (long *****)(ulong)*(byte *)((long)pppppplVar40 + 0x27);
          }
          ppppplVar31 = pppppplVar40[6];
          if (-1 < (char)*(byte *)((long)pppppplVar40 + 0x3f)) {
            ppppplVar31 = (long *****)(ulong)*(byte *)((long)pppppplVar40 + 0x3f);
          }
          ppppplVar29 = pppppplVar40[9];
          if (-1 < (char)*(byte *)((long)pppppplVar40 + 0x57)) {
            ppppplVar29 = (long *****)(ulong)*(byte *)((long)pppppplVar40 + 0x57);
          }
          FUN_107912bcc(&ppppppplStack_1f0,3,
                        (long)ppppplVar31 + (long)ppppplVar34 + (long)ppppplVar29);
          func_0x00010791830c();
          func_0x000107912e38();
          func_0x000107917c84();
          func_0x000107917c84();
          uVar17 = *(char *)((long)pppppplVar40 + 0x57) == '\0';
          func_0x000107917c84();
        }
      }
      else {
        func_0x000107912b90(&ppppppplStack_1f0,3,*pppppplVar40,pppppplVar40[1]);
      }
      func_0x000107912c4c(&ppppppplStack_1f0);
      func_0x000107912d58(&ppppppplStack_1c0);
      func_0x000107912ec4(&ppppppplStack_260);
    }
    else {
      dVar49 = (double)(uint)(1 << (ulong)(param_2 & 0x1f));
      ppppppplStack_1c0 = (long *******)((double)param_3 / dVar49);
      auVar47 = NEON_fmov(0x3ff0000000000000,8);
      ppppppplStack_1b8 = (long *******)((double)param_4 / dVar49);
      ppppppplStack_1b0 = (long *******)(auVar47._8_8_ / (dVar49 * (double)param_6));
      ppppppplStack_1f0 = (long *******)0x0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      func_0x0001078f629c(&ppppppplStack_1f0,(lStack_310 - lStack_318) / 0x30);
      ppppppplVar23 = ppppppplStack_1f0;
      for (lVar39 = lStack_318; lVar39 != lStack_310; lVar39 = lVar39 + 0x30) {
        func_0x0001078f6400(ppppppplVar23);
        func_0x000107915260();
        func_0x0001079128ac();
        func_0x0001078f4654(ppppppplVar23 + 3,
                            (*(long *)(lVar39 + 0x20) - *(long *)(lVar39 + 0x18)) / 0x18);
        for (lVar28 = *(long *)(lVar39 + 0x18); lVar28 != *(long *)(lVar39 + 0x20);
            lVar28 = lVar28 + 0x18) {
          func_0x000107914d7c();
          func_0x0001079128ac();
        }
        ppppppplVar23 = ppppppplVar23 + 6;
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppplStack_260,&UNK_10f434d0f,param_5);
      func_0x00010048a6c8(&ppppppplStack_210,&ppppppplStack_260,&UNK_10f434d42);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_260);
      func_0x0001079172e4(&ppppppplStack_210);
      ppppppplVar41 = (long *******)CONCAT44(uStack_1e4,uStack_1e8);
      for (ppppppplVar23 = ppppppplStack_1f0; ppppppplVar23 != ppppppplVar41;
          ppppppplVar23 = ppppppplVar23 + 6) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&ppppppplStack_210,&DAT_10f434d94);
        func_0x0001079172e4(&ppppppplStack_210);
        func_0x000107912794(&ppppppplStack_210,ppppppplVar23);
        pppppplVar40 = ppppppplVar23[3];
        pppppplVar32 = ppppppplVar23[4];
        if (pppppplVar40 != pppppplVar32) {
          func_0x0001079172dc(&ppppppplStack_210);
          pppppplVar40 = ppppppplVar23[3];
          pppppplVar32 = ppppppplVar23[4];
        }
        for (; pppppplVar40 != pppppplVar32; pppppplVar40 = pppppplVar40 + 3) {
          func_0x00010791830c();
          func_0x000107912794();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&ppppppplStack_210,0x5d);
        func_0x0001079172dc(&ppppppplStack_210);
      }
      uVar17 = uStack_200._7_1_ == 0;
      ppppppplVar23 = ppppppplStack_208;
      ppppppplVar41 = ppppppplStack_210;
      if (-1 < (long)uStack_200) {
        ppppppplVar23 = (long *******)(ulong)uStack_200._7_1_;
        ppppppplVar41 = (long *******)&ppppppplStack_210;
      }
      *(undefined1 *)((long)ppppppplVar41 + (long)ppppppplVar23 + -1) = 0x5d;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&ppppppplStack_210,&UNK_10f434d98);
      func_0x000107912734(&ppppppplStack_1f0);
    }
    func_0x000100066230(&uStack_300,&ppppppplStack_210);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_210);
    extraout_x8[1] = uStack_2f8;
    *extraout_x8 = uStack_300;
    extraout_x8[2] = uStack_2f0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_300 = 0;
  }
  func_0x000107917e90();
code_r0x0001078e500c:
  puVar19 = &uStack_300;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar19);
  func_0x000107913564(uStack_a8);
  if ((bool)uVar17) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107902fd8(&ppppppplStack_240);
  func_0x0001078ee0a0(&ppppppplStack_228);
  func_0x000107917110();
  func_0x000107912734(&pppppplStack_2e8);
  func_0x000107912764(&ppppppplStack_2d0);
  func_0x000107912734(&ppppppplStack_2b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
  __Unwind_Resume(puVar19);
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078e6068; end: 1078e61db;  */

void FUN_1078e6068(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint extraout_w8;
  long extraout_x8;
  long lVar5;
  uint extraout_w9;
  ulong extraout_x9;
  ulong uVar6;
  uint extraout_w10;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *puVar11;
  
  func_0x000107914d64();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000107917174(unaff_x20[-2]);
    uVar7 = extraout_w10;
    if (extraout_w8 != extraout_w9) {
      uVar7 = (uint)(extraout_w8 < extraout_w9);
    }
    if (uVar7 == 1) {
      func_0x00010791704c();
    }
    break;
  case 3:
    func_0x0001078e5e34();
    break;
  case 4:
    func_0x0001079183dc(1);
    func_0x0001078e5f40();
    break;
  case 5:
    func_0x0001079183dc(1);
    func_0x0001078e5fb4();
    break;
  default:
    func_0x000107915b84();
    func_0x0001078e5e34();
    func_0x00010791766c();
    lVar5 = extraout_x8;
    uVar6 = extraout_x9;
    puVar9 = unaff_x19 + 6;
    puVar11 = unaff_x19 + 4;
    while (puVar8 = puVar9, puVar8 != unaff_x20) {
      uVar7 = *puVar11;
      bVar4 = puVar8[1] < puVar11[1];
      if (*puVar8 != uVar7) {
        bVar4 = *puVar8 < uVar7;
      }
      if (bVar4) {
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        lVar3 = lVar5;
        do {
          lVar10 = lVar3;
          *(uint *)((long)unaff_x19 + lVar10 + 0x18) = uVar7;
          *(undefined4 *)((long)unaff_x19 + lVar10 + 0x1c) =
               *(undefined4 *)((long)unaff_x19 + lVar10 + 0x14);
          puVar9 = unaff_x19;
          if (lVar10 == -0x10) goto LAB_1078e6194;
          uVar7 = *(uint *)((long)unaff_x19 + lVar10 + 8);
          bVar4 = uVar2 < *(uint *)((long)unaff_x19 + lVar10 + 0xc);
          if (uVar7 != uVar1) {
            bVar4 = uVar1 < uVar7;
          }
          lVar3 = lVar10 + -8;
        } while (bVar4);
        puVar9 = (uint *)((long)unaff_x19 + lVar10 + 0x10);
LAB_1078e6194:
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar7;
        if (uVar7 == 8) {
          func_0x0001079176f0(puVar8 + 2);
          return;
        }
      }
      lVar5 = lVar5 + 8;
      puVar11 = puVar8;
      puVar9 = puVar8 + 2;
    }
  }
  return;
}



/* Entry: 1078e64e0; end: 1078e652b;  */

void FUN_1078e64e0(long param_1,undefined8 *param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  func_0x0001078e652c(&uStack_40,param_1,&uStack_50,&uStack_58);
  *(undefined8 *)(param_1 + 0x18) = uStack_48;
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  return;
}



/* Entry: 1078e6750; end: 1078e6783;  */

void FUN_1078e6750(undefined8 *param_1)

{
  __ZNSt8bad_castC2Ev();
  *param_1 = &PTR_DAT_1109e9ea8;
  return;
}



/* Entry: 1078e6f40; end: 1078e6fbb;  */

void FUN_1078e6f40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != lVar2; lVar3 = lVar3 + 0x1b0) {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar1 = lVar4 + *(long *)(lVar3 + 0x38) * 0x20;
    if (*(char *)(lVar3 + 0x1a0) == '\x01') {
      *(undefined1 *)(lVar1 + 0x19) = 1;
      *(undefined1 *)(lVar4 + *(long *)(lVar3 + 0xf0) * 0x20 + 0x19) = 1;
    }
    else {
      *(undefined1 *)(lVar1 + 0x1a) = 1;
      *(undefined1 *)(lVar4 + *(long *)(lVar3 + 0xf0) * 0x20 + 0x1a) = 1;
    }
  }
  return;
}



/* Entry: 1078e96bc; end: 1078e96d3;  */

void FUN_1078e96bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  func_0x000107913ad0();
  func_0x000107913ad0();
  func_0x000107917aac();
  func_0x000107914d64();
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
    uVar4 = *unaff_x20;
    puVar3[1] = unaff_x20[1];
    *puVar3 = uVar4;
    puVar3 = puVar3 + 2;
  }
  else {
    func_0x000107918350((long)puVar3 - *unaff_x19 >> 4);
    func_0x0001078e9778();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (param_1 != 0) {
      func_0x0001078e97fc();
    }
    puVar3 = (undefined8 *)(param_1 + (lVar2 - lVar1));
    uVar4 = *unaff_x20;
    puVar3[1] = unaff_x20[1];
    *puVar3 = uVar4;
    func_0x000107915724();
    func_0x0001078e97b8();
    puVar3 = (undefined8 *)unaff_x19[1];
    func_0x000107917d8c();
  }
  unaff_x19[1] = (long)puVar3;
  return;
}



/* Entry: 1078e9a48; end: 1078e9a53;  */

long FUN_1078e9a48(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107913ad0();
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = *(long *)(lVar2 + -0x18);
  if ((*(long *)(lVar2 + -0x20) != lVar1) &&
     (*(long *)(param_1 + 0xb8) == *(long *)(*(long *)(param_1 + 8) + -200))) {
    uVar3 = *param_2;
    *(undefined8 *)(lVar1 + -8) = param_2[1];
    *(undefined8 *)(lVar1 + -0x10) = uVar3;
  }
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  func_0x0001078e96d4((long *)(lVar2 + -0x20));
  return *(long *)(lVar2 + -0x18) - *(long *)(lVar2 + -0x20) >> 4;
}



/* Entry: 1078e9d94; end: 1078e9de3;  */

undefined4 FUN_1078e9d94(double param_1,double param_2,double param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 extraout_w8;
  
  func_0x000107917da8();
  cVar4 = NAN(param_1);
  uVar3 = param_1 == 0.0;
  cVar2 = param_1 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (param_1 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (param_2 < param_3) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078eb40c; end: 1078eb417;  */

void FUN_1078eb40c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913ad0();
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001078eb5a0(uVar1,*(undefined8 *)(unaff_x21 + 0x10));
  func_0x0001079182f8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1078eb6c4; end: 1078eb723;  */

void FUN_1078eb6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  
  uVar1 = param_5 == 99;
  if ((param_5 < 100) &&
     (uVar1 = param_4[1] - *param_4 == 0x79, 0x78 < (ulong)(param_4[1] - *param_4))) {
    func_0x0001079142d0(param_3,param_4,param_5 + 1);
    func_0x000107916450();
    func_0x000107913364();
    func_0x000107913b24();
    func_0x0001078eb44c();
    func_0x000107915ec8();
    if (!(bool)uVar1) {
      func_0x000107915854();
      auStack_e0[0] = param_1;
      uStack_d0 = param_2;
      func_0x000107915350();
      func_0x0001078eb610();
      func_0x000107915350();
      func_0x000107914d88();
      func_0x0001078eb4a4();
      func_0x0001079149c4(auStack_e0);
      func_0x0001078eb56c();
      func_0x000107915350();
      func_0x000107913cc4();
      func_0x0001078eb56c();
    }
    func_0x000107915ed4();
    func_0x000107914d88();
    func_0x0001078eb4a4();
    func_0x0001079172ac();
    func_0x000107914d88();
    func_0x0001078eb4a4();
    func_0x0001079154b4();
    func_0x000107915384();
    func_0x0001079154e4();
    return;
  }
  func_0x000107915d78(param_4,param_6);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x0001078ea4e8();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078ebd14; end: 1078ebd67;  */

bool FUN_1078ebd14(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uStack_30;
  
  func_0x0001079166d8();
  cVar1 = SCARRY4(unaff_w20,1);
  cVar2 = unaff_w20 + 1 < 0;
  bVar3 = unaff_w20 == -1;
  if (bVar3) {
    func_0x000107916574(uStack_30);
    bVar3 = !bVar3 && cVar2 == cVar1;
  }
  else if (unaff_w20 == 1) {
    bVar3 = uStack_30 < *unaff_x19;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 1078ec038; end: 1078ec0bb;  */

undefined4
FUN_1078ec038(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = param_3;
  if (param_1 <= param_3) {
    lVar1 = param_1;
  }
  lVar2 = param_4;
  if (param_2 <= param_4) {
    lVar2 = param_2;
  }
  uVar3 = 0x100;
  if (lVar2 < lVar1) {
    uVar3 = 0x101;
  }
  uVar5 = 0x101;
  if (lVar1 < 1) {
    uVar5 = 1;
  }
  if (lVar1 == lVar2) {
    uVar3 = uVar5;
  }
  uVar4 = 0x100;
  uVar5 = uVar4;
  if (param_2 <= param_1) {
    uVar5 = 0x101;
  }
  if (param_6 != 0) {
    uVar3 = uVar5;
  }
  if (param_4 <= param_3) {
    uVar4 = 0x101;
  }
  if (param_5 != 0) {
    uVar3 = uVar4;
  }
  return uVar3;
}



/* Entry: 1078ec9e8; end: 1078ecb5f;  */

void FUN_1078ec9e8(int param_1)

{
  if (((bRam0000000113726a78 & 1) == 0) && (func_0x000107917fa8(), param_1 != 0)) {
    uRam0000000113726b58 = 1;
    uRam0000000113726b50 = 1;
    func_0x0001078ec2fc();
    ___cxa_guard_release(0x113726a78);
  }
  func_0x0001079184cc(0x113726b50);
  return;
}



/* Entry: 1078ecdf0; end: 1078ece03;  */

void FUN_1078ecdf0(void)

{
  func_0x0001078ecea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ecf54; end: 1078ed087;  */

void FUN_1078ecf54(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x000107914d64();
  dVar9 = *(double *)CONCAT44(uVar2,uVar1);
  dVar8 = ((double *)CONCAT44(uVar2,uVar1))[1];
  pdVar4 = (double *)*param_2;
  param_2 = param_2 + 1;
  pdVar5 = (double *)*param_2;
  dVar11 = *pdVar4;
  dVar10 = *pdVar5;
  dVar6 = dVar9;
  dVar7 = dVar11;
  if (((dVar11 < dVar10) || (dVar6 = dVar11, dVar7 = dVar9, dVar10 < dVar11)) &&
     (func_0x0001078ed088(dVar6,dVar7), (uVar1 & 1) != 0)) goto LAB_1078ed054;
  dVar12 = pdVar4[1];
  dVar9 = pdVar5[1];
  dVar6 = dVar8;
  dVar7 = dVar12;
  if (((dVar12 < dVar9) || (dVar6 = dVar12, dVar7 = dVar8, dVar9 < dVar12)) &&
     (func_0x0001078ed088(dVar6,dVar7), (uVar1 & 1) != 0)) goto LAB_1078ed054;
  unaff_x20 = param_2;
  if (dVar11 <= dVar10) {
    if (dVar11 < dVar10) {
      func_0x0001079183bc();
      goto LAB_1078ed008;
    }
  }
  else {
LAB_1078ed008:
    func_0x0001078ed088();
    if ((uVar1 & 1) != 0) goto LAB_1078ed054;
  }
  if (dVar12 <= dVar9) {
    if (dVar9 <= dVar12) {
      return;
    }
    func_0x0001078ed088(dVar9,dVar8);
  }
  else {
    func_0x0001078ed088(dVar8,dVar9);
    uVar1 = uVar1 & 1;
  }
  if (uVar1 == 0) {
    return;
  }
LAB_1078ed054:
  puVar3 = (undefined8 *)*unaff_x20;
  *unaff_x19 = *puVar3;
  unaff_x19[1] = puVar3[1];
  return;
}



/* Entry: 1078ed450; end: 1078ed46f;  */

undefined4 FUN_1078ed450(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 extraout_w8;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x0001078ec28c();
  func_0x000107914868();
  dVar5 = (double)param_1;
  dVar6 = (double)param_2;
  dVar7 = (double)param_3;
  func_0x000107917da8();
  cVar4 = NAN(dVar5);
  uVar3 = dVar5 == 0.0;
  cVar2 = dVar5 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar5 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar6 < dVar7) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078edbb4; end: 1078edbbf;  */

void FUN_1078edbb4(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  uint uVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w23;
  ulong unaff_x24;
  undefined8 uVar4;
  undefined8 *unaff_x27;
  
  func_0x000107913ad0();
  func_0x000107917384();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    uVar4 = *unaff_x27;
    func_0x000107914c6c();
    uVar3 = unaff_x24;
    func_0x0001078edf30();
    func_0x000107914c6c();
    uVar2 = unaff_w23;
    func_0x0001078edf30();
    if (((uVar3 & 1) != 0) || (uVar2 != 0)) {
      uVar1 = unaff_x19;
      if (((uint)uVar3 & uVar2) == 0) {
        uVar1 = unaff_x21;
      }
      in_ZR = (uint)uVar3 == 0;
      if ((bool)in_ZR) {
        uVar1 = unaff_x20;
      }
      func_0x0001078eda1c(uVar1,uVar4);
    }
    unaff_x27 = unaff_x27 + 1;
  }
  return;
}



/* Entry: 1078edfa0; end: 1078edfeb;  */

bool FUN_1078edfa0(double *param_1,double *param_2)

{
  if (((*param_2 <= param_1[2]) && (*param_1 <= param_2[2])) && (param_2[1] <= param_1[3])) {
    return param_2[3] < param_1[1];
  }
  return true;
}



/* Entry: 1078ee2d8; end: 1078ee35b;  */

long FUN_1078ee2d8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000107914d70();
  func_0x000107915bc8();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x0001079147f8(), unaff_x22 = unaff_x20, (int)param_1 == 0) {
      func_0x0001079154bc();
      if ((int)param_1 == 0) goto LAB_1078ee350;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078ee328;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_00;
  }
LAB_1078ee328:
  func_0x000107917ca4();
  func_0x0001079151e8();
  *(undefined8 *)(param_1 + 0x30) = extraout_x8_01;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x000107913628();
  if (extraout_x8_02 != 0) {
    *unaff_x19 = extraout_x8_02;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_1078ee350:
  return unaff_x20 + 0x38;
}



/* Entry: 1078eeb78; end: 1078eeda3;  */

void FUN_1078eeb78(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107913c7c();
  func_0x0001078eeb10();
  func_0x0001079164c8();
  func_0x0001078eea1c();
  if (param_3 != 0) {
    func_0x000107915308();
    uVar1 = in_x4[4];
    uVar4 = *in_x4;
    uVar3 = in_x4[3];
    uVar2 = in_x4[2];
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = uVar4;
    unaff_x22[3] = uVar3;
    unaff_x22[2] = uVar2;
    unaff_x22[4] = uVar1;
    in_x4[4] = extraout_x8;
    in_x4[1] = in_register_00005008;
    *in_x4 = param_1;
    in_x4[3] = in_register_00005028;
    in_x4[2] = param_2;
    func_0x000107915248();
    func_0x0001078eea1c();
    if (param_3 != 0) {
      func_0x000107914db0();
      uVar1 = unaff_x22[4];
      uVar4 = *unaff_x22;
      uVar3 = unaff_x22[3];
      uVar2 = unaff_x22[2];
      unaff_x21[1] = unaff_x22[1];
      *unaff_x21 = uVar4;
      unaff_x21[3] = uVar3;
      unaff_x21[2] = uVar2;
      unaff_x21[4] = uVar1;
      func_0x000107913d84();
      func_0x0001078eea1c();
      if (param_3 != 0) {
        func_0x000107913be8();
        unaff_x21[1] = in_register_00005008;
        *unaff_x21 = param_1;
        unaff_x21[3] = in_register_00005028;
        unaff_x21[2] = param_2;
        func_0x000107914d7c();
        func_0x0001078eea1c();
        if (param_3 != 0) {
          func_0x000107913438();
        }
      }
    }
  }
  return;
}



/* Entry: 1078ef1d0; end: 1078ef1d7;  */

void FUN_1078ef1d0(long *param_1,undefined8 param_2)

{
  long *unaff_x22;
  
  func_0x0001004d761c(param_1,param_2,param_2);
  func_0x0001004d7694();
  func_0x0001004d76a0();
  if (*param_1 == 0) {
    func_0x0001004d76ec();
    param_1[4] = *unaff_x22;
    func_0x0001004d76fc();
    func_0x0001004d7768();
  }
  func_0x0001004d77a8();
  return;
}



/* Entry: 1078efa58; end: 1078efabb;  */

void FUN_1078efa58(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long in_x4;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078efa10();
  lVar4 = *(long *)(in_x4 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  cVar1 = SBORROW8(lVar4,lVar5);
  cVar2 = lVar4 - lVar5 < 0;
  bVar3 = lVar4 == lVar5;
  if ((((lVar5 < lVar4) && (func_0x000107915c28(), !bVar3 && cVar2 == cVar1)) &&
      (func_0x000107913b8c(), !bVar3 && cVar2 == cVar1)) &&
     (func_0x000107913b5c(), !bVar3 && cVar2 == cVar1)) {
    func_0x000107913dd0();
  }
  return;
}



/* Entry: 1078efe58; end: 1078efe9f;  */

undefined8 * FUN_1078efe58(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  func_0x0001078efea0(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 1078f0224; end: 1078f0667;  */

void FUN_1078f0224(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107916658();
  func_0x0001079141cc();
LAB_1078f0240:
  func_0x0001079157c0();
LAB_1078f0244:
  while( true ) {
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f0460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)((long)unaff_x27 + 0x10dedb8d4) * 4 + 0x1078f0464))();
      return;
    }
    uVar1 = 0x3be < extraout_x8;
    uVar4 = extraout_x8 == 0x3bf;
    if ((long)extraout_x8 < 0x3c0) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 == unaff_x24) {
          return;
        }
        while (puVar5 = unaff_x21, unaff_x21 = puVar5 + 5, unaff_x21 != unaff_x24) {
          func_0x000107914d7c();
          func_0x0001079162f0();
          if (param_3 != 0) {
            func_0x000107915604();
            do {
              puVar6 = puVar5;
              func_0x000107914890();
              func_0x0001078f0668();
              puVar5 = puVar6 + -5;
            } while ((param_3 & 1) != 0);
            func_0x000107915108();
            puVar6[9] = extraout_x8_01;
            puVar6[6] = in_register_00005008;
            puVar6[5] = param_1;
            puVar6[8] = in_register_00005028;
            puVar6[7] = param_2;
          }
        }
        return;
      }
      puVar5 = unaff_x21;
      if (unaff_x21 == unaff_x24) {
        return;
      }
      goto LAB_1078f04f8;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) {
        return;
      }
      func_0x0001079161d0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        func_0x0001078f0b24();
      }
      while( true ) {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)((long)unaff_x27 - 2U) < 0;
        uVar4 = unaff_x27 == (undefined8 *)0x2;
        if ((long)unaff_x27 < 2) break;
        func_0x0001079148d4();
        do {
          func_0x00010791419c();
          if (cVar3 != cVar2) {
            func_0x00010791535c();
            func_0x0001078f0668();
            cVar3 = (int)param_3 < 0;
            uVar4 = param_3 == 0;
            cVar2 = '\0';
          }
          func_0x000107914b7c();
        } while ((bool)uVar4 || cVar3 != cVar2);
        func_0x0001079174ec();
        if ((bool)uVar4) {
          func_0x000107915b08();
          func_0x00010791526c();
        }
        else {
          func_0x0001079143bc();
          if (cVar3 == cVar2) {
            func_0x000107914b9c();
            func_0x0001078f0668();
            if (param_3 != 0) {
              func_0x000107915308();
              func_0x000107915344();
              do {
                func_0x00010791561c();
                func_0x00010791526c();
                func_0x000107918584();
                func_0x000107914d7c();
                func_0x0001078f0668();
              } while ((param_3 & 1) != 0);
              func_0x000107914058();
            }
          }
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 - 1);
      }
      return;
    }
    func_0x0001079163b0();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x0001078f0840();
      func_0x0001079157a8();
      func_0x0001078f0840();
      func_0x00010791639c();
      func_0x0001078f0840();
      func_0x000107915808();
      func_0x0001078f0840();
      func_0x00010791407c();
      in_register_00005008 = unaff_x20[1];
      param_1 = *unaff_x20;
      in_register_00005028 = unaff_x20[3];
      param_2 = unaff_x20[2];
      func_0x000107914454(unaff_x20[4]);
      func_0x0001079158c0();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078f0840();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) != 0) break;
    func_0x000107915b84();
    func_0x0001078f0668();
    if ((param_3 & 1) != 0) break;
    func_0x000107914484();
    func_0x00010791741c();
    func_0x0001078f0668();
    puVar5 = unaff_x21;
    if ((param_3 & 1) == 0) {
      do {
        func_0x000107917870(puVar5 + 5);
        if ((bool)uVar1) break;
        func_0x000107914668();
        func_0x0001078f0668();
        puVar5 = unaff_x27;
      } while (param_3 == 0);
    }
    else {
      do {
        func_0x000107914508();
        func_0x0001078f0668();
        unaff_x27 = unaff_x21;
      } while ((param_3 & 1) == 0);
    }
    func_0x000107917738();
    if (!(bool)uVar1) {
      do {
        func_0x0001079144e0();
        func_0x0001078f0668();
        unaff_x26 = unaff_x24;
      } while ((param_3 & 1) != 0);
    }
    while (unaff_x27 < unaff_x26) {
      func_0x0001079144f4();
      func_0x000107917744();
      unaff_x27[4] = extraout_x8_00;
      unaff_x27[1] = in_register_00005008;
      *unaff_x27 = param_1;
      unaff_x27[3] = in_register_00005028;
      unaff_x27[2] = param_2;
      func_0x000107914058();
      do {
        func_0x000107914508();
        func_0x0001078f0668();
      } while (param_3 == 0);
      do {
        func_0x0001079144e0();
        func_0x0001078f0668();
      } while ((param_3 & 1) != 0);
    }
    in_CY = unaff_x27 + -5 <= unaff_x21;
    in_ZR = unaff_x21 == unaff_x27 + -5;
    if (!(bool)in_ZR) {
      func_0x0001079160a0();
    }
    unaff_x26 = (undefined8 *)0x0;
    func_0x0001079150e0();
  }
  unaff_x27 = (undefined8 *)0x0;
  func_0x000107914484();
  do {
    unaff_x27 = unaff_x27 + 5;
    func_0x000107915664();
    func_0x0001078f0668();
  } while ((param_3 & 1) != 0);
  func_0x0001079174fc();
  if ((bool)uVar4) {
    do {
      unaff_x20 = unaff_x24;
      if (unaff_x24 < (undefined8 *)0x29) break;
      func_0x000107914440();
      func_0x0001078f0668();
    } while ((param_3 & 1) == 0);
  }
  else {
    do {
      func_0x000107914440();
      func_0x0001078f0668();
    } while (param_3 == 0);
  }
  func_0x0001079178ac();
  while (unaff_x27 < unaff_x28) {
    func_0x00010791424c();
    do {
      unaff_x27 = unaff_x27 + 5;
      func_0x000107915664();
      func_0x0001078f0668();
    } while ((param_3 & 1) != 0);
    do {
      unaff_x28 = unaff_x28 + -5;
      func_0x000107915664();
      func_0x0001078f0668();
    } while ((param_3 & 1) == 0);
  }
  unaff_x28 = unaff_x27 + -5;
  if (unaff_x21 != unaff_x28) {
    func_0x000107916544();
    func_0x0001079156d8();
  }
  func_0x0001079150cc();
  in_CY = unaff_x20 < (undefined8 *)0x29;
  in_ZR = unaff_x20 == (undefined8 *)0x28;
  if ((bool)in_CY) {
    func_0x0001079145cc();
    func_0x0001078f096c();
    func_0x00010791487c();
    func_0x0001078f096c();
    if (param_3 != 0) goto LAB_1078f0440;
    if (((ulong)unaff_x20 & 1) != 0) goto LAB_1078f0244;
  }
  func_0x0001079141b4();
  FUN_1078f0224();
  unaff_x26 = (undefined8 *)0x0;
  goto LAB_1078f0244;
LAB_1078f04f8:
  do {
    puVar5 = puVar5 + 5;
    if (puVar5 == unaff_x24) {
      return;
    }
    func_0x00010791535c();
    func_0x0001078f0668();
  } while (param_3 == 0);
  func_0x000107915670();
  do {
    func_0x000107914728((long)unaff_x21 + unaff_x23);
    if (unaff_x23 == 0) break;
    func_0x00010791608c();
    func_0x0001078f0668();
  } while ((param_3 & 1) != 0);
  func_0x0001079150f4();
  goto LAB_1078f04f8;
LAB_1078f0440:
  unaff_x24 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) {
    return;
  }
  goto LAB_1078f0240;
}



/* Entry: 1078f0bd8; end: 1078f0c43;  */

/* WARNING: Possible PIC construction at 0x0001078f0c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f0c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f0c04) */
/* WARNING: Removing unreachable block (ram,0x0001078f0c08) */
/* WARNING: Removing unreachable block (ram,0x0001078f0c18) */
/* WARNING: Removing unreachable block (ram,0x0001078f0c3c) */
/* WARNING: Removing unreachable block (ram,0x000107913578) */
/* WARNING: Removing unreachable block (ram,0x0001078f0c1c) */

undefined8 FUN_1078f0bd8(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x000107914658();
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar1 = (long *)(*param_1 + param_3[1] * 0x20);
  lVar2 = *plVar1;
  uVar4 = (plVar1[1] - lVar2 >> 4) - 1;
  lVar5 = 0;
  if (uVar4 != 0) {
    lVar5 = param_3[3] / (long)uVar4;
  }
  lVar5 = param_3[3] - lVar5 * uVar4;
  puVar3 = (undefined8 *)(lVar2 + ((uVar4 & lVar5 >> 0x3f) + lVar5) * 0x10);
  uVar6 = *puVar3;
  param_4[1] = puVar3[1];
  *param_4 = uVar6;
  return 1;
}



/* Entry: 1078f1458; end: 1078f1557;  */

bool FUN_1078f1458(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107914c78();
  func_0x00010791542c();
  lVar6 = param_1;
  func_0x000107913b08();
  FUN_1078e9d94();
  iVar3 = (int)lVar6;
  iVar4 = (int)param_1;
  if (iVar4 == 0 && iVar3 == 0) {
    func_0x000107913c58();
    func_0x000107915420();
    lVar5 = lVar6;
    func_0x000107913b08();
    func_0x0001078f1930();
    iVar3 = (int)lVar5;
    iVar4 = (int)lVar6;
    bVar1 = SBORROW4(iVar4,iVar3);
    bVar2 = iVar4 - iVar3 < 0;
    if (iVar4 == iVar3) goto LAB_1078f153c;
  }
  else {
    lVar5 = lVar6;
    if (iVar4 == 0) {
      func_0x000107913c58();
      func_0x000107915420();
      lVar5 = lVar6;
      if ((int)lVar6 == -1) {
        return true;
      }
    }
    if (iVar3 == 0) {
      func_0x000107913b08();
      func_0x0001078f1930();
      if ((int)lVar5 == -1) {
        return false;
      }
    }
    bVar1 = SBORROW4(iVar4,iVar3);
    bVar2 = iVar4 - iVar3 < 0;
    if (iVar4 == iVar3) {
      func_0x000107915908();
      func_0x000107916580();
      func_0x000107915474();
      iVar3 = (int)lVar5;
      if (iVar3 != 0) {
        func_0x000107915908();
        func_0x00010791542c();
        iVar4 = (int)lVar5;
        if (iVar3 + iVar4 == 0) {
          bVar1 = SBORROW4(iVar4,iVar3);
          bVar2 = iVar4 - iVar3 < 0;
          goto LAB_1078f1530;
        }
      }
LAB_1078f153c:
      func_0x000107915254();
      iVar3 = *(int *)(lVar5 + 0x2c);
      iVar4 = *(int *)(param_2 + 0x2c);
      bVar1 = SBORROW4(iVar3,iVar4);
      bVar2 = iVar3 - iVar4 < 0;
      if (iVar3 == iVar4) {
        lVar6 = *(long *)(lVar5 + 0x20);
        lVar7 = *(long *)(param_2 + 0x20);
        bVar1 = SBORROW8(lVar6,lVar7);
        bVar2 = lVar6 - lVar7 < 0;
        if (lVar6 == lVar7) {
          lVar6 = *(long *)(lVar5 + 0x48);
          lVar7 = *(long *)(param_2 + 0x48);
          bVar1 = SBORROW8(lVar6,lVar7);
          bVar2 = lVar6 - lVar7 < 0;
          if (lVar6 == lVar7) {
            lVar6 = *(long *)(lVar5 + 0x50);
            lVar7 = *(long *)(param_2 + 0x50);
            bVar1 = SBORROW8(lVar6,lVar7);
            bVar2 = lVar6 - lVar7 < 0;
            if (lVar6 == lVar7) {
              lVar6 = *(long *)(lVar5 + 0x58);
              lVar7 = *(long *)(param_2 + 0x58);
              bVar1 = SBORROW8(lVar6,lVar7);
              bVar2 = lVar6 - lVar7 < 0;
              if (lVar6 == lVar7) {
                lVar6 = *(long *)(lVar5 + 0x68);
                lVar7 = *(long *)(param_2 + 0x68);
                bVar1 = SBORROW8(lVar6,lVar7);
                bVar2 = lVar6 - lVar7 < 0;
                if (lVar6 == lVar7) {
                  bVar1 = SBORROW8(*(long *)(lVar5 + 0x60),*(long *)(param_2 + 0x60));
                  bVar2 = *(long *)(lVar5 + 0x60) - *(long *)(param_2 + 0x60) < 0;
                }
              }
            }
          }
          return bVar2 != bVar1;
        }
      }
      return bVar2 != bVar1;
    }
  }
LAB_1078f1530:
  return bVar2 != bVar1;
}



/* Entry: 1078f1b74; end: 1078f1bb7;  */

void FUN_1078f1b74(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078f1ffc; end: 1078f2063;  */

undefined8 FUN_1078f1ffc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar5 = *param_2;
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar6 = plVar1;
  while (plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
    lVar2 = 8;
    if (lVar5 <= plVar7[4]) {
      lVar2 = 0;
    }
    plVar6 = (long *)((long)plVar7 + lVar2);
    if (lVar5 <= plVar7[4]) {
      plVar4 = plVar7;
    }
  }
  if ((plVar1 == plVar4) || (lVar5 < plVar4[4])) {
    uVar3 = 0;
  }
  else {
    func_0x0001078f1b98();
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1078f3478; end: 1078f34af;  */

void FUN_1078f3478(long *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = 1;
  lVar3 = *param_1;
  do {
    *param_1 = lVar3 + 0x10;
    if (lVar3 + 0x10 != param_1[2]) {
      return;
    }
    *param_1 = param_1[1];
    bVar1 = bVar2 & *(byte *)(param_1 + 3);
    bVar2 = 0;
    lVar3 = param_1[1];
  } while (bVar1 != 0);
  return;
}



/* Entry: 1078f3e30; end: 1078f3f77;  */

void FUN_1078f3e30(int param_1)

{
  int unaff_w19;
  int unaff_w22;
  
  func_0x0001079189bc();
  func_0x000107913a74();
  func_0x0001078f3d34();
  func_0x00010791406c();
  func_0x0001079164c8();
  func_0x0001078f3c30();
  if (param_1 != 0) {
    func_0x000107913ce4();
    func_0x000107914498();
    func_0x0001079146a0();
    func_0x00010791406c();
    func_0x000107916938();
    func_0x0001078f3c30();
    if (unaff_w22 != 0) {
      func_0x000107913a24();
      func_0x000107913ce4();
      func_0x0001079146c0();
      func_0x00010791406c();
      func_0x000107914d7c();
      func_0x0001078f3c30();
      if (unaff_w19 != 0) {
        func_0x000107913d48();
        func_0x000107913cfc();
        func_0x000107913e60();
      }
    }
  }
  return;
}



/* Entry: 1078f4380; end: 1078f43db;  */

void FUN_1078f4380(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107918878();
    func_0x0001078e97fc();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  func_0x0001078e97f0();
  func_0x00010002bfa0();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001078e64cc(*unaff_x19);
  }
  return;
}



/* Entry: 1078f4748; end: 1078f47a3;  */

long FUN_1078f4748(long param_1)

{
  func_0x0001078f1e00(*(undefined8 *)(param_1 + 0x40));
  func_0x0001078f1dcc(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 1078f4ae0; end: 1078f4b87;  */

ulong FUN_1078f4ae0(ulong param_1,ulong param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  bVar1 = param_2 <= param_1;
  bVar2 = param_1 == param_2;
  if (bVar2) {
    return param_1;
  }
  func_0x000107914f34();
  if (!bVar1 || bVar2) {
    func_0x00010791746c();
    if (bVar1 && !bVar2) {
      if (unaff_x23 != unaff_x22) {
        func_0x00010791522c();
        _memmove();
        unaff_x23 = *(long *)(param_1 + 8);
      }
      lVar4 = unaff_x24 - (unaff_x20 + param_3);
      if (lVar4 != 0) {
        func_0x000107915554();
      }
      lVar4 = unaff_x23 + lVar4;
      goto LAB_1078f4b78;
    }
  }
  else {
    uVar3 = param_1;
    func_0x0001078f4b88(param_1);
    func_0x00010791535c();
    func_0x0001078f4bdc();
    func_0x0001078f4bac(param_1,uVar3);
    unaff_x22 = *(long *)(param_1 + 8);
  }
  if (unaff_x24 != unaff_x20) {
    func_0x000107913f60();
  }
  lVar4 = unaff_x22 + unaff_x21;
LAB_1078f4b78:
  *(long *)(param_1 + 8) = lVar4;
  return param_1;
}



/* Entry: 1078f4d7c; end: 1078f4d8f;  */

void FUN_1078f4d7c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078f5208; end: 1078f523b;  */

/* WARNING: Possible PIC construction at 0x0001078f561c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f5750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f5740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f5704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f570c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f569c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f56a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f5710) */
/* WARNING: Removing unreachable block (ram,0x0001078f5708) */
/* WARNING: Removing unreachable block (ram,0x0001078f5754) */
/* WARNING: Removing unreachable block (ram,0x0001078f5620) */
/* WARNING: Removing unreachable block (ram,0x0001078f56a0) */

void FUN_1078f5208(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,ulong param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar5;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  uVar3 = param_3[1] - *param_3 == 0x80;
  if (((ulong)(param_3[1] - *param_3) < 0x80) || (uVar3 = param_5 == 99, 99 < param_5))
  goto code_r0x0001078f552c;
  uVar1 = 0x78 < (ulong)(param_4[1] - *param_4);
  uVar3 = param_4[1] - *param_4 == 0x79;
  if (!(bool)uVar1) goto code_r0x0001078f552c;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078f50b8();
  func_0x000107913794();
  func_0x0001078f50b8();
  func_0x0001079155d4();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913f00(), (bool)uVar1)) {
        func_0x0001078f57c8(auStack_d8);
        func_0x000107913df4();
        func_0x0001078f523c();
        func_0x000107915b2c();
        func_0x00010791354c();
        func_0x0001078f57c0();
        func_0x000107913ef0();
        if (((bool)uVar1) &&
           ((func_0x000107913ee0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x0001078f57c8(auStack_d8);
            func_0x000107915338();
            func_0x000107913880(auStack_50);
            func_0x0001078f57c0();
            func_0x000107913894(auStack_50);
            func_0x0001078f57c0();
            goto LAB_1078f56a8;
          }
        }
        func_0x000107913f20();
        unaff_x30 = 0x1078f56a0;
        register0x00000008 = (BADSPACEBASE *)auStack_140;
        goto code_r0x0001078f552c;
      }
    }
    func_0x000107913f30();
    unaff_x30 = 0x1078f5620;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
    goto code_r0x0001078f552c;
  }
LAB_1078f56a8:
  func_0x0001079155c8();
  if ((bool)uVar3) {
    func_0x0001079185d0();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
LAB_1078f5720:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913ea0(), (bool)uVar1)) {
        func_0x000107913a0c();
        func_0x0001078f57c0();
        func_0x000107913e90();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107913e80(), bVar2)) {
            func_0x00010791386c(&uStack_90);
            func_0x0001078f57c0();
            func_0x000107915a84();
            func_0x000107915ac4();
            func_0x000107915a70();
            func_0x000107915af4();
            func_0x000107915ae4();
            func_0x000107915b24();
            return;
          }
        }
        func_0x000107913eb0();
        unaff_x30 = 0x1078f5754;
        register0x00000008 = (BADSPACEBASE *)auStack_140;
        goto code_r0x0001078f552c;
      }
    }
    func_0x000107914848();
    unaff_x30 = 0x1078f5744;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
  }
  else {
    func_0x0001079158a8();
    if (((bool)uVar1) && (func_0x000107913ed0(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x0001078f57c8(auStack_120);
        func_0x000107915338();
        func_0x000107913adc(auStack_50,&uStack_a8);
        func_0x0001078f57c0();
        func_0x000107913858(auStack_50);
        func_0x0001078f57c0();
        goto LAB_1078f5720;
      }
    }
    func_0x000107914858();
    unaff_x30 = 0x1078f5708;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
  }
code_r0x0001078f552c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x0001078f4ea8();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078f55b0; end: 1078f57bf;  */

void FUN_1078f55b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078f50b8();
  func_0x000107913794();
  func_0x0001078f50b8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078f5618;
      func_0x0001078f57c8(auStack_d8);
      func_0x000107913df4();
      func_0x0001078f523c();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001078f57c0();
    }
    else {
LAB_1078f5618:
      func_0x000107913f30();
      func_0x0001078f552c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x0001078f57c8(auStack_d8);
          func_0x000107915338();
          func_0x000107913880(auStack_50);
          func_0x0001078f57c0();
          func_0x000107913894(auStack_50);
          func_0x0001078f57c0();
          goto LAB_1078f56a8;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078f552c();
    func_0x000107913f10();
    func_0x0001078f552c();
  }
LAB_1078f56a8:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
LAB_1078f5718:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078f5720;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x0001078f552c();
      func_0x000107913ec0();
      func_0x0001078f552c();
      goto LAB_1078f5718;
    }
    func_0x0001078f57c8(auStack_120);
    func_0x000107915338();
    func_0x000107913adc(auStack_50,&uStack_a8);
    func_0x0001078f57c0();
    func_0x000107913858(auStack_50);
    func_0x0001078f57c0();
LAB_1078f5720:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001078f57c0();
      goto LAB_1078f5744;
    }
  }
  func_0x000107914848();
  func_0x0001078f552c();
LAB_1078f5744:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078f57c0();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f552c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1078f5a58; end: 1078f5a9b;  */

long * FUN_1078f5a58(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    uint param_7,ulong param_8)

{
  long *unaff_x19;
  long *plVar1;
  long *unaff_x21;
  long unaff_x22;
  
  if (param_5 == 2) {
    func_0x000107914d70(param_1,param_4 + param_6 * 0x18);
    if ((param_8 & 1) != 0) {
      if ((ulong)(unaff_x21[1] - *unaff_x21) < 0x31) {
        return param_1;
      }
      func_0x000107914c0c();
      func_0x0001078f4654();
      plVar1 = (long *)(*(long *)(unaff_x22 + 8) + -0x18);
      func_0x0001078f5c14(plVar1);
      if (param_7 == 0) {
        return plVar1;
      }
      plVar1 = (long *)(unaff_x19[4] + -0x18);
      goto code_r0x000107917f20;
    }
    func_0x0001004d77a8();
    func_0x0001078f5c14();
  }
  else {
    if (param_5 == 1) {
      param_2 = param_3 + param_6 * 0x20;
    }
    else {
      if (param_5 != 0) {
        return param_1;
      }
      param_2 = param_2 + param_6 * 0x20;
    }
    func_0x000107914d70(param_1,param_2);
    if ((param_8 & 1) != 0) {
      if ((ulong)(unaff_x21[1] - *unaff_x21) < 0x31) {
        return param_1;
      }
      func_0x000107914c0c();
      func_0x0001078f4654();
      func_0x0001078f5ba8();
      if (param_7 == 0) {
        return unaff_x21;
      }
      plVar1 = (long *)(unaff_x19[4] + -0x18);
      goto code_r0x000107917f20;
    }
    func_0x000107914da4();
    func_0x0001078f5ba8();
  }
  plVar1 = unaff_x19;
  if ((param_7 & 1) == 0) {
    return param_1;
  }
code_r0x000107917f20:
  func_0x000107914c90(plVar1);
  func_0x0001078f47a4();
  return unaff_x19;
}



/* Entry: 1078f5e18; end: 1078f5f1b;  */

void FUN_1078f5e18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong extraout_x8;
  long unaff_x19;
  long lVar5;
  long unaff_x21;
  long *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined1 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  
  func_0x0001079189a8();
  func_0x000107914d70();
  func_0x0001078f4328();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar5 = *(long *)(unaff_x21 + 0x18);
  lVar1 = *(long *)(unaff_x21 + 0x20);
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 / 0x18;
    func_0x000107914b0c();
    if (extraout_x8 <= uVar4) {
      func_0x0001078f44b8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1078f5ef4);
      (*pcVar3)();
    }
    func_0x0001078f4510();
    in_stack_00000010 = (long *)(unaff_x19 + 0x28);
    *in_stack_00000010 = uVar4 + param_2 * 0x18;
    *(ulong *)(unaff_x19 + 0x18) = uVar4;
    *(ulong *)(unaff_x19 + 0x20) = uVar4;
    in_stack_00000018 = &stack0x00000030;
    in_stack_00000020 = &stack0x00000038;
    in_stack_00000028 = 0;
    in_stack_00000030 = uVar4;
    for (; in_stack_00000038 = uVar4, lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      func_0x00010791522c();
      func_0x0001078f4328();
      uVar4 = in_stack_00000038 + 0x18;
    }
    in_stack_00000028 = 1;
    func_0x0001078f453c(&stack0x00000010);
    *(ulong *)(unaff_x19 + 0x20) = uVar4;
  }
  func_0x000107914e8c();
  func_0x0001078f5f1c();
  return;
}



/* Entry: 1078f6194; end: 1078f625b;  */

void FUN_1078f6194(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x000107914c78();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001079174dc(*(undefined8 *)(param_2 + 8));
  lVar5 = extraout_x8 + extraout_x9 * extraout_x10;
  lVar3 = lVar5;
  lVar4 = lVar2;
  while (lVar4 != lVar1) {
    func_0x0001079161c4(lVar3);
    func_0x0001079138d4();
    lVar3 = extraout_x8_00 + 0x18;
    lVar4 = extraout_x9_00 + 0x18;
  }
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107912734();
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar4;
  func_0x00010791351c();
  return;
}



/* Entry: 1078f64c8; end: 1078f65c3;  */

void FUN_1078f64c8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_register_00005028;
  undefined8 uVar6;
  char acStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char acStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107913cd4();
  acStack_b8[0] = '\0';
  func_0x0001079160e0();
  uVar3 = param_1;
  uVar4 = in_register_00005008;
  uVar5 = param_2;
  uVar6 = in_register_00005028;
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 6) {
    plVar2 = unaff_x21;
    func_0x0001078f6498();
    if (((ulong)plVar2 & 1) == 0) {
      if (*unaff_x21 == unaff_x21[1]) {
        plVar2 = (long *)unaff_x21[3];
        plVar1 = (long *)unaff_x21[4];
        acStack_68[0] = '\0';
        for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
          if (*plVar2 != plVar2[1]) {
            func_0x0001078f65ec(*plVar2,plVar2[1],&uStack_90);
            func_0x0001078f65c4(acStack_68,&uStack_90);
          }
        }
        uVar3 = param_1;
        uVar4 = in_register_00005008;
        uVar5 = param_2;
        uVar6 = in_register_00005028;
        uStack_90 = param_2;
        uStack_88 = in_register_00005028;
        uStack_80 = param_1;
        uStack_78 = in_register_00005008;
        if (acStack_68[0] == '\x01') {
          uStack_88 = uStack_58;
          uStack_90 = uStack_60;
          uStack_78 = uStack_48;
          uStack_80 = uStack_50;
          uVar3 = uStack_60;
          uVar4 = uStack_58;
          uVar5 = uStack_50;
          uVar6 = uStack_48;
        }
      }
      else {
        func_0x0001078f65ec(*unaff_x21,unaff_x21[1],&uStack_90);
      }
      func_0x0001078f65c4(acStack_b8,&uStack_90);
    }
  }
  if (acStack_b8[0] != '\x01') {
    func_0x000107913d34();
    uStack_b0 = uVar3;
    uStack_a8 = uVar4;
    uStack_a0 = uVar5;
    uStack_98 = uVar6;
  }
  unaff_x19[1] = uStack_a8;
  *unaff_x19 = uStack_b0;
  unaff_x19[3] = uStack_98;
  unaff_x19[2] = uStack_a0;
  return;
}



/* Entry: 1078f8bf8; end: 1078f8d93;  */

void FUN_1078f8bf8(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  
  func_0x0001079136f4();
  puVar1 = param_1;
  puVar3 = (ulong *)*param_1;
  while (puVar3 != param_1 + 1) {
    if (((*(byte *)((long)puVar3 + 0x59) & 1) == 0) && (puVar3[0xc] == 0xffffffffffffffff)) {
      puStack_88 = (ulong *)0x0;
      uStack_90 = 0;
      uStack_78 = 0;
      puStack_80 = (ulong *)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      dVar5 = (double)puVar3[4];
      func_0x000107901450(&uStack_a0,*unaff_x22,*unaff_x21);
      for (pdVar4 = (double *)puVar3[0x10]; pdVar4 != (double *)puVar3[0x11]; pdVar4 = pdVar4 + 3) {
        puVar1 = param_1;
        func_0x0001078f5cdc(param_1,pdVar4);
        if ((param_1 + 1 != puVar1) && ((*(byte *)((long)puVar1 + 0x59) & 1) == 0)) {
          dVar5 = *pdVar4;
          func_0x000107901450(&uStack_a0,*unaff_x22,*unaff_x21);
        }
      }
      puVar1 = &uStack_a0;
      func_0x0001078f5d38();
      if ((ulong *)0x3 < puVar1) {
        uVar2 = uStack_a0;
        func_0x0001079009b0(uStack_a0,uStack_98);
        puVar1 = puStack_80;
        dVar7 = 0.0;
        dVar6 = dVar5;
        for (puVar3 = puStack_88; puVar3 != puVar1; puVar3 = puVar3 + 3) {
          uVar2 = *puVar3;
          func_0x0001079009b0(uVar2,puVar3[1]);
          dVar7 = dVar7 + dVar6;
        }
        func_0x000107914cfc();
        if (((uVar2 & 1) == 0) && (0.0 < dVar5 + dVar7)) {
          func_0x0001078f5d68();
        }
      }
      puVar1 = &uStack_a0;
      func_0x0001078e6404();
    }
    func_0x000107917cec();
    puVar3 = puVar1;
  }
  return;
}



/* Entry: 1078f966c; end: 1078f96c7;  */

void FUN_1078f966c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x0001078f93d0();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078fa77c; end: 1078fa82b;  */

long * FUN_1078fa77c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  func_0x0001004d761c();
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    func_0x000107917ecc(&stack0x00000010,param_1[3]);
    func_0x000107917ecc();
    lVar1 = in_stack_00000018;
    lVar3 = in_stack_00000010;
    for (uVar2 = 0;
        (lVar3 == in_stack_00000000 && lVar1 == in_stack_00000008 &&
        (uVar2 < *(ulong *)(*param_1 + 0x58))); uVar2 = uVar2 + 1) {
      FUN_1078f3478(param_1 + 4);
      func_0x000107917ecc();
    }
    lVar3 = *(long *)param_1[4];
    param_1[9] = ((long *)param_1[4])[1];
    param_1[8] = lVar3;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1 + 8;
}



/* Entry: 1078fabc0; end: 1078fac83;  */

undefined4 FUN_1078fabc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined4 extraout_w8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x000107914c78();
  func_0x0001078fa82c();
  lVar5 = unaff_x20[1];
  lVar6 = *unaff_x19;
  func_0x000107915e78(*unaff_x20);
  dVar7 = (double)param_3;
  dVar8 = (double)lVar5;
  dVar9 = (double)lVar6;
  func_0x000107917da8();
  cVar4 = NAN(dVar7);
  uVar3 = dVar7 == 0.0;
  cVar2 = dVar7 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar7 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar8 < dVar9) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078fafa0; end: 1078fafd3;  */

/* WARNING: Possible PIC construction at 0x0001078fb2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fb370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fb3cc) */
/* WARNING: Removing unreachable block (ram,0x0001078fb3c4) */
/* WARNING: Removing unreachable block (ram,0x0001078fb410) */
/* WARNING: Removing unreachable block (ram,0x0001078fb2fc) */
/* WARNING: Removing unreachable block (ram,0x0001078fb36c) */

void FUN_1078fafa0(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long lVar5;
  
  uVar3 = param_2[1] - *param_2 == 0x80;
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (uVar3 = param_4 == 99, 99 < param_4))
  goto code_r0x0001078fb250;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x0001078fb250;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913f00(), (bool)uVar1)) {
        func_0x000107913d24();
        func_0x0001078f96f8();
        func_0x00010791354c();
        func_0x0001078fb478();
        func_0x000107913ef0();
        if (((bool)uVar1) &&
           ((func_0x000107913ee0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x000107914c84();
            func_0x0001078f9724();
            func_0x000107913880();
            func_0x0001078fb478();
            func_0x000107913894();
            func_0x0001078fb478();
            goto code_r0x0001078fb374;
          }
        }
        func_0x000107913f20();
        goto code_r0x0001078fb250;
      }
    }
    func_0x000107913f30();
    goto code_r0x0001078fb250;
  }
code_r0x0001078fb374:
  func_0x0001079155c8();
  if ((bool)uVar3) {
    func_0x0001079181f0();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
code_r0x0001078fb3dc:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913ea0(), (bool)uVar1)) {
        func_0x0001079139c4();
        func_0x0001078fb478();
        func_0x000107913e90();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107913e80(), bVar2)) {
            func_0x00010791386c(&stack0x000000b0);
            func_0x0001078fb478();
            func_0x00010791502c();
            func_0x000107915070();
            func_0x000107915008();
            func_0x0001079150b0();
            func_0x00010791508c();
            func_0x000107915094();
            return;
          }
        }
        func_0x000107913eb0();
        goto code_r0x0001078fb250;
      }
    }
    func_0x0001079146f8();
  }
  else {
    func_0x0001079158a8();
    if (((bool)uVar1) && (func_0x000107913ed0(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x000107915ee0();
        func_0x0001078f9724();
        func_0x000107913a34();
        func_0x0001078fb478();
        func_0x000107913650();
        func_0x0001078fb478();
        goto code_r0x0001078fb3dc;
      }
    }
    func_0x000107914708();
  }
code_r0x0001078fb250:
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x0001078fae78();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078fb498; end: 1078fb4ff;  */

bool FUN_1078fb498(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[1] == param_2[1])) {
    if (*param_1 != 0) {
      param_3 = param_4;
    }
    lVar1 = *param_3;
    func_0x0001078fb500(lVar1,param_1,param_2[3]);
    return lVar1 < 2;
  }
  return false;
}



/* Entry: 1078fbd04; end: 1078fbd7f;  */

undefined8 FUN_1078fbd04(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar3;
  
  func_0x00010791462c();
  do {
    func_0x000107915a18();
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    uVar2 = *unaff_x21;
    func_0x0001078fbd80(*unaff_x20,unaff_x20[1],uVar2,unaff_x21[1]);
    iVar1 = (int)uVar2;
    if (iVar1 == 1) {
      puVar3 = (undefined8 *)unaff_x21[3];
      do {
        if (puVar3 == (undefined8 *)unaff_x21[4]) {
          return 1;
        }
        uVar2 = *puVar3;
        func_0x0001078fbd80(*unaff_x20,unaff_x20[1],uVar2,puVar3[1]);
        puVar3 = puVar3 + 3;
      } while ((int)uVar2 == -1);
      iVar1 = -(int)uVar2;
    }
    in_ZR = 0;
    unaff_x21 = unaff_x21 + 6;
  } while (iVar1 < 0);
  return 0;
}



/* Entry: 1078fc618; end: 1078fc663;  */

/* WARNING: Possible PIC construction at 0x0001078fc638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fc63c) */
/* WARNING: Removing unreachable block (ram,0x0001078fc65c) */
/* WARNING: Removing unreachable block (ram,0x000107913ac4) */
/* WARNING: Removing unreachable block (ram,0x0001078fc640) */

undefined8 FUN_1078fc618(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long *extraout_x9;
  ulong uVar6;
  undefined8 uVar7;
  
  func_0x000107914658();
  lVar3 = 0;
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar5 = (long *)(*param_1 + param_3[1] * 0x30);
  lVar4 = param_3[3];
  if (-1 < param_3[2]) {
    func_0x000107916bf8(0x1078fc63c);
    lVar4 = extraout_x8;
    plVar5 = extraout_x9;
  }
  uVar6 = (plVar5[1] - *plVar5 >> 4) - 1;
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = (lVar4 + lVar3) / (long)uVar6;
  }
  lVar3 = (lVar4 + lVar3) - lVar1 * uVar6;
  puVar2 = (undefined8 *)(*plVar5 + ((uVar6 & lVar3 >> 0x3f) + lVar3) * 0x10);
  uVar7 = *puVar2;
  param_4[1] = puVar2[1];
  *param_4 = uVar7;
  return 1;
}



/* Entry: 1078fca28; end: 1078fcaef;  */

void FUN_1078fca28(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_1078fca28();
    FUN_1078fca28(*(undefined8 *)(unaff_x19 + 8));
    func_0x000107917cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078fe2ac; end: 1078fe2cb;  */

undefined1  [16] FUN_1078fe2ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107914090();
  func_0x0001078fc664();
  return auStack_20;
}



/* Entry: 1078fe558; end: 1078fe5db;  */

void FUN_1078fe558(long param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong *unaff_x19;
  
  func_0x000107917aac();
  func_0x000107914d64();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar1 = *unaff_x19;
    bVar3 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001079137e0();
      if (!bVar3) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10) - uVar1;
      lVar4 = lVar2 >> 2;
      if (lVar2 == 0) {
        lVar4 = 1;
      }
      func_0x00010791877c();
      func_0x0001078fe698(lVar4);
      func_0x000107913404();
      func_0x0001078fe674();
      func_0x0001079135c0();
      func_0x0001078fe6e4();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 1078ff6b8; end: 1078ff797;  */

undefined1 * FUN_1078ff6b8(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_d8 [152];
  
  func_0x000107914a04();
  if (((bool)in_CY && !(bool)in_ZR) || (func_0x0001079147b4(), !(bool)in_CY)) {
    func_0x000107914da4();
    func_0x000107915d78();
    if (!(bool)in_ZR) {
      func_0x000107914c78();
      lVar3 = extraout_x8;
      while (uVar1 = unaff_x21 == lVar3, !(bool)uVar1) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), lVar3 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
          func_0x00010791460c();
          func_0x0001078fe9c0();
          if (((ulong)param_1 & 1) == 0) {
            return (undefined1 *)0x0;
          }
        }
      }
    }
    return (undefined1 *)0x1;
  }
  func_0x0001079153ac();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078f9428();
  func_0x000107915ec8();
  if ((bool)in_ZR) {
LAB_1078ff72c:
    func_0x000107915ed4();
    func_0x000107914dd4();
    func_0x0001078ff82c();
    if ((int)param_1 != 0) {
      func_0x0001079172ac();
      func_0x000107914dd4();
      func_0x0001078ff82c();
      goto LAB_1078ff76c;
    }
  }
  else {
    func_0x0001079155e0();
    iVar2 = (int)param_1;
    func_0x0001078fb028();
    func_0x0001079155e0();
    func_0x000107914dd4();
    func_0x0001078ff82c();
    if (iVar2 != 0) {
      iVar2 = (int)auStack_d8;
      func_0x0001079149b0();
      func_0x0001078ff858();
      if (iVar2 != 0) {
        param_1 = auStack_d8;
        func_0x0001079149d8();
        func_0x0001078ff858();
        if (((ulong)param_1 & 1) != 0) goto LAB_1078ff72c;
      }
    }
  }
  param_1 = (undefined1 *)0x0;
LAB_1078ff76c:
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return param_1;
}



/* Entry: 1078ffd14; end: 1078ffd1b;  */

undefined8 FUN_1078ffd14(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar6;
  ulong unaff_x20;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  iVar4 = (int)&stack0x00000000;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) {
code_r0x0001078ff968:
    func_0x0001079155c8();
    if ((bool)uVar3) {
code_r0x0001078ff9d0:
      func_0x000107914d34(in_stack_000000a0);
      iVar4 = (int)param_1;
      if (((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107913ea0();
        iVar4 = (int)param_1;
        if (!(bool)in_CY) goto code_r0x0001078ff9dc;
        func_0x0001079139c4();
        func_0x0001078ffb04();
        iVar4 = (int)param_1;
        if (((ulong)param_1 & 1) == 0) goto code_r0x0001078ffa44;
      }
      else {
code_r0x0001078ff9dc:
        func_0x0001079146f8();
        func_0x0001078ffa94();
        if (iVar4 == 0) goto code_r0x0001078ffa44;
      }
      func_0x000107913e90();
      if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107913e80(), bVar2)) {
        uVar5 = 0;
        func_0x00010791386c();
        func_0x0001078ffb04();
        if ((uVar5 & 1) != 0) {
code_r0x0001078ffa1c:
          uVar6 = 1;
          goto code_r0x0001078ffa48;
        }
      }
      else {
        func_0x000107913eb0();
        func_0x0001078ffa94();
        if (iVar4 != 0) goto code_r0x0001078ffa1c;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x000107915ee0();
        func_0x0001078f96c8();
        func_0x000107913a34();
        func_0x0001078ffb04();
        if ((int)param_1 != 0) {
          func_0x000107913650();
          func_0x0001078ffb04();
          if (((ulong)param_1 & 1) != 0) goto code_r0x0001078ff9d0;
        }
      }
      else {
        func_0x000107914708();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913ec0();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto code_r0x0001078ff9d0;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x0001078ff8d0:
      func_0x000107913f30();
      func_0x0001078ffa94();
      if ((int)param_1 != 0) {
code_r0x0001078ff904:
        func_0x000107913ef0();
        in_CY = 0;
        if ((bool)uVar1) {
          func_0x000107913ee0();
          in_CY = 0;
          if ((bool)uVar1) {
            in_CY = 0x62 < unaff_x20;
            uVar3 = unaff_x20 == 99;
            if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
              func_0x000107914c84();
              func_0x0001078f96c8();
              func_0x000107913880();
              func_0x0001078ffb04();
              if (iVar4 != 0) {
                func_0x000107913894();
                func_0x0001078ffb04();
                param_1 = (undefined1 *)register0x00000008;
                if (((ulong)register0x00000008 & 1) != 0) goto code_r0x0001078ff968;
              }
              goto code_r0x0001078ffa44;
            }
          }
        }
        func_0x000107913f20();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913f10();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto code_r0x0001078ff968;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto code_r0x0001078ff8d0;
      func_0x000107913d24();
      func_0x0001078f9480();
      func_0x00010791354c();
      func_0x0001078ffb04();
      if (((ulong)param_1 & 1) != 0) goto code_r0x0001078ff904;
    }
  }
code_r0x0001078ffa44:
  uVar6 = 0;
code_r0x0001078ffa48:
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return uVar6;
}



/* Entry: 107900104; end: 10790016f;  */

void FUN_107900104(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1079002bc; end: 1079002e7;  */

long FUN_1079002bc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt9exceptionD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 107900634; end: 1079006f7;  */

void FUN_107900634(void)

{
  bool bVar1;
  undefined1 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long alStack_a0 [5];
  long lStack_78;
  long alStack_60 [4];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x00010791886c();
  while( true ) {
    if (unaff_x20 == unaff_x19[1]) {
      return;
    }
    func_0x00010791760c();
    func_0x0001079006f8();
    func_0x000107900730(alStack_a0);
    if ((alStack_60[0] != alStack_a0[0]) || (bVar1 = lStack_38 == lStack_78, !bVar1)) break;
    func_0x00010791835c();
    if (bVar1) {
      unaff_x20 = *unaff_x19;
    }
    else {
      func_0x0001079182b0();
      if (!bVar1) goto LAB_1079006b0;
    }
    unaff_x20 = unaff_x20 + 0x30;
    *unaff_x19 = unaff_x20;
  }
  unaff_x20 = *unaff_x19;
LAB_1079006b0:
  uVar2 = unaff_x20 == unaff_x19[1];
  if ((bool)uVar2) {
    return;
  }
  func_0x0001079006f8(alStack_60);
  func_0x000107917978();
  if (!(bool)uVar2) {
    unaff_x19[6] = lStack_40;
  }
  unaff_x19[7] = lStack_38;
  unaff_x19[8] = lStack_30;
  if (lStack_38 == lStack_30) {
    return;
  }
  unaff_x19[9] = lStack_28;
  return;
}



/* Entry: 107900940; end: 1079009af;  */

long FUN_107900940(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined2 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x40) = 0xbff0000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  func_0x000107915848();
  func_0x0001079009b0();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  if (puVar1 != puVar2) {
    *(undefined8 *)(param_2 + 8) = *puVar1;
    *(undefined8 *)(param_2 + 0x10) = puVar1[1];
  }
  *(bool *)param_2 = puVar1 != puVar2;
  return param_2;
}



/* Entry: 107900e18; end: 107900e4b;  */

/* WARNING: Possible PIC construction at 0x00010790122c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107901360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107901350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107901314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790131c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079012ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079012b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107901320) */
/* WARNING: Removing unreachable block (ram,0x000107901318) */
/* WARNING: Removing unreachable block (ram,0x000107901364) */
/* WARNING: Removing unreachable block (ram,0x000107901230) */
/* WARNING: Removing unreachable block (ram,0x0001079012b0) */

void FUN_107900e18(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,ulong param_5)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar5;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  uVar3 = param_3[1] - *param_3 == 0x80;
  if (((ulong)(param_3[1] - *param_3) < 0x80) || (uVar3 = param_5 == 99, 99 < param_5))
  goto code_r0x00010790113c;
  uVar1 = 0x78 < (ulong)(param_4[1] - *param_4);
  uVar3 = param_4[1] - *param_4 == 0x79;
  if (!(bool)uVar1) goto code_r0x00010790113c;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107900cc8();
  func_0x000107913794();
  func_0x000107900cc8();
  func_0x0001079155d4();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913f00(), (bool)uVar1)) {
        func_0x0001079013d8(auStack_d8);
        func_0x000107913df4();
        func_0x000107900e4c();
        func_0x000107915b2c();
        func_0x00010791354c();
        func_0x0001079013d0();
        func_0x000107913ef0();
        if (((bool)uVar1) &&
           ((func_0x000107913ee0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            func_0x0001079013d8(auStack_d8);
            func_0x000107915338();
            func_0x000107913880(auStack_50);
            func_0x0001079013d0();
            func_0x000107913894(auStack_50);
            func_0x0001079013d0();
            goto LAB_1079012b8;
          }
        }
        func_0x000107913f20();
        unaff_x30 = 0x1079012b0;
        register0x00000008 = (BADSPACEBASE *)auStack_140;
        goto code_r0x00010790113c;
      }
    }
    func_0x000107913f30();
    unaff_x30 = 0x107901230;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
    goto code_r0x00010790113c;
  }
LAB_1079012b8:
  func_0x0001079155c8();
  if ((bool)uVar3) {
    func_0x0001079185d0();
    uVar3 = unaff_x21 == 0x80;
    if (0x7f < unaff_x21) {
LAB_107901330:
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107913ea0(), (bool)uVar1)) {
        func_0x000107913a0c();
        func_0x0001079013d0();
        func_0x000107913e90();
        if ((bool)uVar1) {
          bVar2 = (long *)0x62 < unaff_x20;
          uVar3 = unaff_x20 == (long *)0x63;
          if ((unaff_x20 < (long *)0x64) && (func_0x000107913e80(), bVar2)) {
            func_0x00010791386c(&uStack_90);
            func_0x0001079013d0();
            func_0x000107915a84();
            func_0x000107915ac4();
            func_0x000107915a70();
            func_0x000107915af4();
            func_0x000107915ae4();
            func_0x000107915b24();
            return;
          }
        }
        func_0x000107913eb0();
        unaff_x30 = 0x107901364;
        register0x00000008 = (BADSPACEBASE *)auStack_140;
        goto code_r0x00010790113c;
      }
    }
    func_0x000107914848();
    unaff_x30 = 0x107901354;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
  }
  else {
    func_0x0001079158a8();
    if (((bool)uVar1) && (func_0x000107913ed0(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        func_0x0001079013d8(auStack_120);
        func_0x000107915338();
        func_0x000107913adc(auStack_50,&uStack_a8);
        func_0x0001079013d0();
        func_0x000107913858(auStack_50);
        func_0x0001079013d0();
        goto LAB_107901330;
      }
    }
    func_0x000107914858();
    unaff_x30 = 0x107901318;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
  }
code_r0x00010790113c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar4 = extraout_x8;
    lVar5 = extraout_x9;
    while (unaff_x22 != lVar5) {
      lVar5 = *unaff_x20;
      while (lVar5 != lVar4) {
        func_0x00010791415c();
        func_0x000107900b6c();
        lVar4 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar4 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1079011c0; end: 1079013cf;  */

void FUN_1079011c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107900cc8();
  func_0x000107913794();
  func_0x000107900cc8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_107901228;
      func_0x0001079013d8(auStack_d8);
      func_0x000107913df4();
      func_0x000107900e4c();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x0001079013d0();
    }
    else {
LAB_107901228:
      func_0x000107913f30();
      func_0x00010790113c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x0001079013d8(auStack_d8);
          func_0x000107915338();
          func_0x000107913880(auStack_50);
          func_0x0001079013d0();
          func_0x000107913894(auStack_50);
          func_0x0001079013d0();
          goto LAB_1079012b8;
        }
      }
    }
    func_0x000107913f20();
    func_0x00010790113c();
    func_0x000107913f10();
    func_0x00010790113c();
  }
LAB_1079012b8:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
LAB_107901328:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_107901330;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x00010790113c();
      func_0x000107913ec0();
      func_0x00010790113c();
      goto LAB_107901328;
    }
    func_0x0001079013d8(auStack_120);
    func_0x000107915338();
    func_0x000107913adc(auStack_50,&uStack_a8);
    func_0x0001079013d0();
    func_0x000107913858(auStack_50);
    func_0x0001079013d0();
LAB_107901330:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x0001079013d0();
      goto LAB_107901354;
    }
  }
  func_0x000107914848();
  func_0x00010790113c();
LAB_107901354:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001079013d0();
  }
  else {
    func_0x000107913eb0();
    func_0x00010790113c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 107901674; end: 1079016c7;  */

void FUN_107901674(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107913d34();
  param_5[1] = in_register_00005008;
  *param_5 = param_1;
  param_5[3] = in_register_00005028;
  param_5[2] = param_2;
  if (param_3 != param_4) {
    func_0x00010791434c();
    for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
      func_0x0001004d77a8();
      func_0x0001078e9c18();
    }
  }
  return;
}



/* Entry: 107902048; end: 10790205b;  */

void FUN_107902048(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1079027c0; end: 1079027cb;  */

void FUN_1079027c0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [120];
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
  
  func_0x000107913ad0();
  func_0x000107913cb4();
  uVar3 = *param_1;
  uVar4 = 0;
  func_0x0001079143ec(uVar3,param_1[2]);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = uVar3;
  uStack_98 = uVar6;
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  uStack_70 = uVar3;
  uStack_68 = uStack_88;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107902c2c();
  func_0x000107913794();
  func_0x000107902c98();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x000107902834;
      func_0x000107916ef0();
      func_0x000107913df4();
      func_0x000107902f98();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x000107902d04();
    }
    else {
code_r0x000107902834:
      func_0x000107913f30();
      func_0x000107902f14();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916ef0();
          func_0x000107915338();
          func_0x000107913880(&uStack_60);
          func_0x000107902d04();
          func_0x000107913894(&uStack_60);
          func_0x000107902d04();
          goto code_r0x0001079028bc;
        }
      }
    }
    func_0x000107913f20();
    func_0x000107902f14();
    func_0x000107913f10();
    func_0x000107902f14();
  }
code_r0x0001079028bc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
code_r0x00010790292c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107902934;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x000107902f14();
      func_0x000107913ec0();
      func_0x000107902f14();
      goto code_r0x00010790292c;
    }
    func_0x000107913d34();
    uStack_60 = uVar3;
    uStack_58 = uVar4;
    uStack_50 = uVar5;
    uStack_48 = uVar6;
    func_0x000107915510();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_150,&uStack_b8);
    func_0x000107902d04();
    func_0x000107913650();
    func_0x000107902d04();
code_r0x000107902934:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x000107902d04();
      goto code_r0x000107902958;
    }
  }
  func_0x000107914848();
  func_0x000107902f14();
code_r0x000107902958:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_a0);
    func_0x000107902d04();
  }
  else {
    func_0x000107913eb0();
    func_0x000107902f14();
  }
  func_0x000107902fd8(auStack_130);
  func_0x000107916e90();
  func_0x000107916cd8();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 107902f78; end: 107902f97;  */

bool FUN_107902f78(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if ((*(char *)(param_2 + 0x34) == '\x01') && ((*(byte *)((long)param_2 + 0x1a3) & 1) == 0)) {
    dVar3 = *param_2;
    dVar4 = param_1[2];
    bVar1 = false;
    bVar2 = true;
    if (*param_1 <= dVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar3) && !NAN(dVar4)) {
        bVar1 = dVar3 == dVar4;
        bVar2 = dVar4 <= dVar3;
      }
    }
    if (!bVar2 || bVar1) {
      return param_2[1] <= param_1[3] && param_1[1] <= param_2[1];
    }
  }
  return false;
}



/* Entry: 1079030e0; end: 107903127;  */

void FUN_1079030e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107914d64();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001079186b4();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      func_0x000107918860();
      while (func_0x00010791814c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x30;
        FUN_1079126fc();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000107917c24();
  }
  func_0x00010791570c(0x30);
  return;
}



/* Entry: 107903348; end: 107903353;  */

void FUN_107903348(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x000107913ad0();
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x000107915b9c();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107903654; end: 1079036ab;  */

void FUN_107903654(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  
  func_0x000107914c4c();
  if (!(bool)in_ZR) {
    func_0x0001079035e4();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x000107913f60();
    *(long *)(unaff_x19 + 8) = lVar1 + unaff_x21;
  }
  func_0x000107914e8c();
  func_0x000107903618();
  return;
}



/* Entry: 1079065a4; end: 107906617;  */

void FUN_1079065a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  undefined8 *puVar1;
  
  func_0x000107913cd4();
  *(undefined8 *)(param_3 + 0x10) = 0xffffffffffffffff;
  func_0x000107917c6c(*param_1,*(undefined8 *)(unaff_x21 + 8));
  func_0x0001004d7750();
  for (puVar1 = *(undefined8 **)(unaff_x21 + 0x18); puVar1 != *(undefined8 **)(unaff_x21 + 0x20);
      puVar1 = puVar1 + 3) {
    func_0x000107917c6c(*puVar1,puVar1[1]);
    func_0x0001004d7750();
  }
  return;
}



/* Entry: 107906f60; end: 107906fcf;  */

/* WARNING: Possible PIC construction at 0x000107906fc8: Changing call to branch */

void FUN_107906f60(undefined4 *param_1)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
code_r0x000107906fd0:
      func_0x000107913ad0();
      func_0x000107913cd4();
      uVar2 = *param_1;
      FUN_1079072d4(uVar2,*(undefined4 *)(unaff_x21 + 8));
      func_0x0001079187c4();
      *(undefined4 *)(unaff_x20 + 8) = uVar2;
      *unaff_x19 = uVar2;
      return;
    }
    func_0x000107913680();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto code_r0x000107906fd0;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  *(long **)(unaff_x19 + 2) = unaff_x24;
  return;
}



/* Entry: 1079072d4; end: 107907343;  */

int FUN_1079072d4(int param_1,int param_2)

{
  return param_2 / 2 + param_1 / 2 +
         (int)((char)((char)param_2 + (char)(param_2 / 2) * -2 +
                     (char)param_1 + (char)(param_1 / 2) * -2) / '\x02');
}



/* Entry: 107907b94; end: 107907c0f;  */

void FUN_107907b94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x18) = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x50) = 0x100000000;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined4 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x78) = 0xffffffffffffffff;
    *(undefined2 *)(lVar1 + 0x80) = 0x101;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0xa8) = 0xffffffffffffffff;
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    *(undefined4 *)(lVar1 + 0xb8) = 0;
    lVar2 = lVar2 + 0xa0;
    *(undefined2 *)(lVar1 + 0xbc) = 0;
  } while (lVar2 != 0x140);
  return;
}



/* Entry: 107908948; end: 107908993;  */

undefined4 FUN_107908948(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  uVar2 = uVar3;
  if (param_3 <= param_1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 <= param_2) {
    uVar1 = uVar2;
  }
  if (param_1 <= param_3) {
    uVar3 = 2;
  }
  uVar2 = 0;
  if (param_2 <= param_1) {
    uVar2 = uVar3;
  }
  if (param_2 < param_3) {
    uVar1 = uVar2;
  }
  uVar2 = 3;
  if (param_1 != param_3) {
    uVar2 = uVar1;
  }
  uVar3 = 1;
  if (param_1 != param_2) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 107908fc4; end: 107909033;  */

void FUN_107908fc4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x000107909058();
      func_0x000107913404();
      func_0x000107909034();
      func_0x0001079135c0();
      func_0x0001079090a4();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 1079092b0; end: 1079092e7;  */

void FUN_1079092b0(long *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = 1;
  lVar3 = *param_1;
  do {
    *param_1 = lVar3 + 8;
    if (lVar3 + 8 != param_1[2]) {
      return;
    }
    *param_1 = param_1[1];
    bVar1 = bVar2 & *(byte *)(param_1 + 3);
    bVar2 = 0;
    lVar3 = param_1[1];
  } while (bVar1 != 0);
  return;
}



/* Entry: 107909744; end: 10790976b;  */

undefined1  [16] FUN_107909744(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010791540c(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 107909c84; end: 107909ebf;  */

void FUN_107909c84(ulong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  undefined4 *extraout_x10;
  undefined4 *extraout_x10_00;
  undefined4 *puVar9;
  uint *unaff_x21;
  ulong uVar10;
  undefined4 *puVar11;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  uint uStack_31c;
  undefined4 *puStack_318;
  uint *puStack_308;
  long lStack_2f8;
  uint *puStack_2b0;
  long lStack_2a8;
  int *piStack_2a0;
  undefined1 auStack_298 [360];
  long lStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f0;
  uint *puStack_e8;
  undefined1 uStack_d0;
  uint *puStack_c0;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined1 uStack_68;
  undefined4 *puStack_50;
  undefined4 *puStack_28;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x000107915f10();
  func_0x000107915ba8();
  if ((((param_1 & 1) == 0) && ((unaff_x21[0x14] & 1) == 0)) &&
     (func_0x000107918140(), (extraout_x8 & 1) == 0)) {
    cVar3 = *(char *)((long)unaff_x27 + 0x2c);
    if (-1 < *(long *)(unaff_x21 + 6)) {
      func_0x000107916bf8(*(undefined8 *)*unaff_x27);
    }
    func_0x000107916a54();
    if (-1 < *(long *)(extraout_x9 + 0x18)) {
      func_0x000107915928(extraout_x8_00 + *(long *)(extraout_x9 + 0x10) * 0x30);
    }
    func_0x0001079164e4();
    uVar1 = *unaff_x21;
    iVar2 = *piStack_2a0;
    uStack_10 = *(undefined8 *)(unaff_x21 + 0xc);
    uStack_18 = *(undefined8 *)(unaff_x21 + 0x16);
    func_0x000107914184(uStack_10,*(undefined8 *)(unaff_x21 + 0xe));
    func_0x00010790a430();
    func_0x000107917648();
    puStack_50 = puStack_28;
    func_0x000107914df8();
    func_0x000107916e64();
    puVar11 = puStack_28;
    while( true ) {
      uVar10 = (ulong)uVar1;
      puVar9 = puVar11 + 2;
      if (puVar9 == puStack_318) break;
      cVar5 = SCARRY4(uVar1,1);
      cVar6 = (int)(uVar1 + 1) < 0;
      if (uVar1 == 0xffffffff) {
        func_0x000107915d54(*puVar11);
        puVar9 = extraout_x10_00;
        if (cVar6 != cVar5) {
          return;
        }
      }
      else {
        cVar5 = SBORROW4(uVar1,1);
        cVar6 = (int)(uVar1 - 1) < 0;
        bVar7 = uVar1 == 1;
        if ((bVar7) && (func_0x000107916440(), puVar9 = extraout_x10, !bVar7 && cVar6 == cVar5)) {
          return;
        }
      }
      puStack_80 = puStack_50;
      uStack_68 = 1;
      puStack_90 = puVar11;
      puStack_88 = puVar9;
      func_0x000107915048();
      func_0x000107915e4c();
      func_0x00010790a430();
      puVar4 = puStack_c0;
      uStack_d0 = 1;
      puStack_e8 = puStack_c0;
      func_0x000107916208();
      func_0x000107916208();
      func_0x0001079177f8();
      while (puVar4 + 2 != puStack_2b0) {
        cVar5 = SCARRY4(iVar2,1);
        cVar6 = iVar2 + 1 < 0;
        uVar8 = iVar2 == -1;
        if ((bool)uVar8) {
          func_0x000107915d54();
          if (cVar6 != cVar5) break;
        }
        else {
          uVar8 = 0;
          if ((iVar2 == 1) &&
             (uVar8 = *puVar4 == unaff_x21[10], !(bool)uVar8 && (int)unaff_x21[10] <= (int)*puVar4))
          break;
        }
        func_0x000107917020();
        if ((bool)uVar8) {
          cVar5 = SBORROW8(unaff_x28,uVar10);
          cVar6 = (long)(unaff_x28 - uVar10) < 0;
          unaff_x21 = puStack_308;
          if (((unaff_x28 != uVar10) || (cVar3 == '\0')) ||
             ((unaff_x26 != 0 &&
              ((uVar10 = unaff_x28, lStack_2a8 != 0 || (func_0x0001079177d4(), cVar6 != cVar5))))))
          goto LAB_107909e54;
        }
        else {
LAB_107909e54:
          puStack_128 = puVar4;
          puStack_118 = puStack_e8;
          uStack_100 = 0;
          uStack_f0 = 0;
          lStack_130 = unaff_x25;
          puStack_120 = puVar4 + 2;
          FUN_107907b94(auStack_298);
          func_0x000107915278();
        }
        unaff_x25 = unaff_x25 + 1;
        func_0x000107916208();
        func_0x0001079181b4();
      }
      func_0x000107914300();
      unaff_x26 = lStack_2f8 + 1;
      puVar11 = puVar9;
      uVar1 = uStack_31c;
    }
  }
  return;
}



/* Entry: 10790a27c; end: 10790a427;  */

void FUN_10790a27c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_10790a2b4;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x00010790a428();
    }
    else {
LAB_10790a2b4:
      func_0x0001079142a0();
      func_0x00010790a218();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916834();
          func_0x000107913810();
          func_0x00010790a428();
          func_0x0001079137f8();
          func_0x00010790a428();
          goto LAB_10790a32c;
        }
      }
    }
    func_0x000107914290();
    func_0x00010790a218();
    func_0x0001079142b0();
    func_0x00010790a218();
  }
LAB_10790a32c:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
LAB_10790a388:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_10790a390;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x00010790a218();
      func_0x0001079142e0();
      func_0x00010790a218();
      goto LAB_10790a388;
    }
    func_0x000107916824();
    func_0x000107913840();
    func_0x00010790a428();
    func_0x000107913828();
    func_0x00010790a428();
LAB_10790a390:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      func_0x00010790a428();
      goto LAB_10790a3b4;
    }
  }
  func_0x0001079145ec();
  func_0x00010790a218();
LAB_10790a3b4:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    func_0x00010790a428();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790a218();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790ac54; end: 10790acbf;  */

void FUN_10790ac54(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined8 *in_x4;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001079189a8();
  func_0x000107913c7c();
  func_0x00010790ac0c();
  if (*(int *)((long)unaff_x22 + 0xc) < *(int *)((long)in_x4 + 0xc)) {
    uVar7 = unaff_x22[1];
    uVar6 = *unaff_x22;
    uVar8 = *in_x4;
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = uVar8;
    in_x4[1] = uVar7;
    *in_x4 = uVar6;
    iVar1 = *(int *)((long)unaff_x22 + 0xc);
    iVar2 = *(int *)(unaff_x21 + 0xc);
    cVar3 = SBORROW4(iVar1,iVar2);
    cVar4 = iVar1 - iVar2 < 0;
    bVar5 = iVar1 == iVar2;
    if (((iVar2 < iVar1) && (func_0x000107916b6c(), !bVar5 && cVar4 == cVar3)) &&
       (func_0x0001079168cc(), !bVar5 && cVar4 == cVar3)) {
      func_0x0001079185fc();
    }
  }
  return;
}



/* Entry: 10790b0e0; end: 10790b193;  */

void FUN_10790b0e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010791551c();
  do {
    if (unaff_x20 == unaff_x19) {
      return;
    }
    uVar1 = param_1;
    func_0x00010790b12c(param_1,param_2,unaff_x20);
    unaff_x20 = unaff_x20 + 0x30;
  } while ((int)uVar1 < 0);
  return;
}



/* Entry: 10790bbbc; end: 10790bc1b;  */

/* WARNING: Possible PIC construction at 0x00010790bbe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790bbec) */
/* WARNING: Removing unreachable block (ram,0x00010790bc14) */
/* WARNING: Removing unreachable block (ram,0x000107913ac4) */
/* WARNING: Removing unreachable block (ram,0x00010790bbf0) */

undefined8 FUN_10790bbbc(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  if (*param_3 != 0) {
    if (*param_3 != 1) {
      return 0;
    }
    param_1 = *param_2 + param_3[1] * 0x30;
  }
  func_0x00010790bc58(param_1,param_3[2],param_3[3],0,param_4);
  return 1;
}



/* Entry: 10790c2a4; end: 10790c2af;  */

/* WARNING: Possible PIC construction at 0x00010790c518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790cc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790cb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790cc34) */
/* WARNING: Removing unreachable block (ram,0x00010790cc44) */
/* WARNING: Removing unreachable block (ram,0x00010790cc74) */
/* WARNING: Removing unreachable block (ram,0x00010790cca0) */
/* WARNING: Removing unreachable block (ram,0x00010790cccc) */
/* WARNING: Removing unreachable block (ram,0x00010790cce4) */
/* WARNING: Removing unreachable block (ram,0x00010790c51c) */
/* WARNING: Removing unreachable block (ram,0x00010790cb94) */
/* WARNING: Removing unreachable block (ram,0x00010790cba0) */
/* WARNING: Removing unreachable block (ram,0x00010790cbcc) */
/* WARNING: Removing unreachable block (ram,0x00010790cbf8) */
/* WARNING: Removing unreachable block (ram,0x00010790cc10) */
/* WARNING: Removing unreachable block (ram,0x000107913bd4) */

void FUN_10790c2a4(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  int iVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *unaff_x19;
  undefined8 uVar17;
  long *unaff_x20;
  long *plVar18;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar19;
  long lVar20;
  undefined8 unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong uVar21;
  ulong unaff_x28;
  undefined *puVar22;
  undefined1 *puVar9;
  
  puVar22 = &UNK_10790c2b0;
  func_0x000107913ad0();
  puVar12 = &stack0xfffffffffffffff0;
  puVar8 = (undefined1 *)register0x00000008;
code_r0x00010790c2b0:
  puVar9 = puVar12;
  *(ulong *)(puVar9 + -0x60) = unaff_x28;
  *(long **)(puVar9 + -0x58) = unaff_x27;
  *(long **)(puVar9 + -0x50) = unaff_x26;
  *(ulong *)(puVar9 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(long *)(puVar9 + -0x38) = unaff_x23;
  *(long **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = unaff_x21;
  *(long **)(puVar9 + -0x20) = unaff_x20;
  *(long **)(puVar9 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar9 + -0x10) = puVar8 + -0x10;
  *(undefined **)(puVar9 + -8) = puVar22;
  *(int *)(puVar9 + -0x154) = (int)param_5;
  unaff_x21 = param_1;
  unaff_x26 = param_2;
code_r0x00010790c2e8:
  *(long **)(puVar9 + -0x150) = unaff_x26 + -0xd;
  *(long **)(puVar9 + -0x168) = unaff_x26 + -0x27;
  *(long **)(puVar9 + -0x160) = unaff_x26 + -0x1a;
  *(long **)(puVar9 + -0x140) = unaff_x26;
  unaff_x27 = unaff_x21;
code_r0x00010790c304:
  unaff_x21 = unaff_x27;
  iVar10 = (int)param_1;
  uVar16 = (long)unaff_x26 - (long)unaff_x21;
  uVar21 = (long)uVar16 / 0x68;
  switch(uVar21) {
  case 0:
  case 1:
    goto code_r0x00010790c650;
  case 2:
    func_0x000107914838();
    func_0x000107915d0c();
    if (iVar10 != 0) {
      func_0x000107913e1c(puVar9 + -0xd0);
      uVar17 = *(undefined8 *)(puVar9 + -0x150);
      func_0x000107914144(unaff_x21);
      func_0x000107914ab4(uVar17,puVar9 + -0xd0);
    }
    goto code_r0x00010790c650;
  case 3:
    puVar12 = *(undefined1 **)(puVar9 + -0x10);
    puVar22 = *(undefined **)(puVar9 + -8);
    plVar18 = unaff_x21;
    func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,*(undefined8 *)(puVar9 + -0x150));
    goto code_r0x00010790ca7c;
  case 4:
    puVar12 = *(undefined1 **)(puVar9 + -0x10);
    puVar22 = *(undefined **)(puVar9 + -8);
    plVar14 = param_3;
    func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,unaff_x21 + 0x1a,*(undefined8 *)(puVar9 + -0x150))
    ;
    break;
  case 5:
    plVar14 = *(long **)(puVar9 + -0x150);
    uVar17 = *(undefined8 *)(puVar9 + -0x10);
    uVar15 = *(undefined8 *)(puVar9 + -8);
    func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,unaff_x21 + 0x1a,unaff_x21 + 0x27,plVar14,param_3)
    ;
    func_0x0001079189bc();
    *(undefined8 *)(puVar9 + -0xd0) = uVar17;
    *(undefined8 *)(puVar9 + -200) = uVar15;
    puVar12 = puVar9 + -0xd0;
    func_0x000107913908();
    puVar22 = &UNK_10790cc34;
    break;
  default:
    if ((long)uVar16 < 0x9c0) {
      if ((*(uint *)(puVar9 + -0x154) & 1) == 0) {
        if (unaff_x21 != unaff_x26) {
          plVar14 = unaff_x21 + -0xd;
          while (unaff_x21 = unaff_x21 + 0xd, unaff_x21 != unaff_x26) {
            func_0x000107914838();
            func_0x000107915d0c();
            if ((int)param_1 != 0) {
              func_0x000107914010(puVar9 + -0xd0);
              plVar18 = plVar14;
              do {
                param_1 = plVar18;
                plVar13 = param_1 + 0x1a;
                func_0x000107914ab4(plVar13,param_1 + 0xd);
                func_0x000107914838();
                func_0x000107915d0c();
                plVar18 = param_1 + -0xd;
              } while (((ulong)plVar13 & 1) != 0);
              param_1 = param_1 + 0xd;
              func_0x000107914ab4(param_1,puVar9 + -0xd0);
            }
            plVar14 = plVar14 + 0xd;
          }
        }
        goto code_r0x00010790c650;
      }
      if (unaff_x21 == unaff_x26) goto code_r0x00010790c650;
      lVar19 = 0;
      plVar14 = unaff_x21;
      goto code_r0x00010790c728;
    }
    if (param_4 != 0) {
      plVar14 = unaff_x21 + (uVar21 >> 1) * 0xd;
      if (uVar16 < 0x3401) {
        func_0x000107915848();
        func_0x000107916854();
      }
      else {
        func_0x000107914e28();
        func_0x000107916854();
        func_0x000107916854(unaff_x21 + 0xd,plVar14 + -0xd,*(undefined8 *)(puVar9 + -0x160));
        func_0x000107916854(unaff_x21 + 0x1a,plVar14 + 0xd,*(undefined8 *)(puVar9 + -0x168));
        func_0x00010791522c();
        func_0x000107916854();
        func_0x000107913e1c(puVar9 + -0xd0);
        func_0x000107914010(unaff_x21);
        func_0x000107914ab4(plVar14,puVar9 + -0xd0);
        param_1 = plVar14;
      }
      *(long *)(puVar9 + -0x148) = param_4 + -1;
      puVar4 = (uint *)param_3[1];
      uVar5 = *(uint *)*param_3;
      if ((*(uint *)(puVar9 + -0x154) & 1) != 0) {
        uVar3 = *puVar4;
code_r0x00010790c3dc:
        puVar12 = puVar9 + -0x138;
        func_0x000107913e1c();
        lVar19 = 0;
        do {
          lVar19 = lVar19 + 0x68;
          func_0x000107913e08();
          func_0x00010790c958();
        } while (((ulong)puVar12 & 1) != 0);
        plVar14 = (long *)((long)unaff_x21 + lVar19);
        plVar18 = *(long **)(puVar9 + -0x140);
        unaff_x27 = plVar14;
        if (lVar19 == 0x68) {
          plVar18 = *(long **)(puVar9 + -0x140);
          do {
            plVar13 = plVar18;
            if (plVar18 <= plVar14) break;
            plVar18 = plVar18 + -0xd;
            func_0x000107913e08();
            func_0x000107917dc4();
            plVar13 = plVar18;
          } while (((ulong)puVar12 & 1) == 0);
        }
        else {
          do {
            plVar18 = plVar18 + -0xd;
            func_0x000107913e08();
            func_0x000107917dc4();
            plVar13 = plVar18;
          } while ((int)puVar12 == 0);
        }
        while( true ) {
          unaff_x25 = (ulong)uVar3;
          unaff_x28 = (ulong)uVar5;
          if (plVar18 <= unaff_x27) break;
          func_0x000107914ab4(puVar9 + -0xd0,unaff_x27);
          func_0x0001079141e4(unaff_x27);
          plVar11 = plVar18;
          func_0x000107914ab4(plVar18,puVar9 + -0xd0);
          uVar3 = *(uint *)(*param_3 + 4);
          uVar5 = *(uint *)param_3[1];
          do {
            unaff_x27 = unaff_x27 + 0xd;
            func_0x000107917858();
            func_0x00010790c958();
          } while (((ulong)plVar11 & 1) != 0);
          do {
            plVar18 = plVar18 + -0xd;
            func_0x000107917858();
            func_0x00010790c958();
          } while (((ulong)plVar11 & 1) == 0);
        }
        unaff_x22 = unaff_x27 + -0xd;
        if (unaff_x21 != unaff_x22) {
          func_0x0001079141e4(unaff_x21);
        }
        param_2 = (long *)(puVar9 + -0x138);
        unaff_x20 = unaff_x22;
        func_0x000107914ab4();
        param_4 = *(long *)(puVar9 + -0x148);
        unaff_x26 = *(long **)(puVar9 + -0x140);
        unaff_x24 = 0x68;
        param_1 = unaff_x20;
        if (plVar13 <= plVar14) {
          func_0x000107915260();
          func_0x00010790ccec();
          param_1 = unaff_x20;
          func_0x0001079171fc();
          func_0x00010790ccec();
          if ((int)param_1 != 0) goto code_r0x00010790c62c;
          plVar13 = unaff_x20;
          if (((ulong)unaff_x20 & 1) != 0) goto code_r0x00010790c304;
        }
        param_5 = (ulong)(*(uint *)(puVar9 + -0x154) & 1);
        func_0x000107915260();
        puVar22 = &UNK_10790c51c;
        puVar12 = puVar9 + -0x170;
        unaff_x19 = param_3;
        unaff_x20 = plVar13;
        unaff_x23 = param_4;
        puVar8 = puVar9;
        goto code_r0x00010790c2b0;
      }
      uVar3 = *puVar4;
      unaff_x22 = (long *)(ulong)puVar4[1];
      func_0x000107913e08();
      func_0x000107915d0c();
      if (((ulong)param_1 & 1) != 0) goto code_r0x00010790c3dc;
      puVar12 = puVar9 + -0x138;
      func_0x000107913e1c();
      func_0x000107913e08();
      func_0x00010790c958();
      unaff_x27 = unaff_x21;
      if (((ulong)puVar12 & 1) == 0) {
        do {
          unaff_x27 = unaff_x27 + 0xd;
          if (unaff_x26 <= unaff_x27) break;
          func_0x000107913e08();
          func_0x000107917dcc();
        } while ((int)puVar12 == 0);
      }
      else {
        do {
          unaff_x27 = unaff_x27 + 0xd;
          func_0x000107913e08();
          func_0x000107917dcc();
        } while (((ulong)puVar12 & 1) == 0);
      }
      plVar14 = unaff_x26;
      if (unaff_x27 < unaff_x26) {
        do {
          plVar14 = plVar14 + -0xd;
          func_0x000107913e08();
          func_0x0001079167e4();
        } while (((ulong)puVar12 & 1) != 0);
      }
      while (unaff_x27 < plVar14) {
        func_0x000107914ab4(puVar9 + -0xd0,unaff_x27);
        func_0x000107914010(unaff_x27);
        plVar18 = plVar14;
        func_0x000107914ab4(plVar14,puVar9 + -0xd0);
        unaff_x22 = (long *)(ulong)*(uint *)*param_3;
        do {
          unaff_x27 = unaff_x27 + 0xd;
          func_0x000107917708();
          func_0x000107917dcc();
        } while ((int)plVar18 == 0);
        do {
          plVar14 = plVar14 + -0xd;
          func_0x000107917708();
          func_0x0001079167e4();
        } while (((ulong)plVar18 & 1) != 0);
      }
      unaff_x20 = unaff_x27 + -0xd;
      if (unaff_x21 != unaff_x20) {
        func_0x000107914010(unaff_x21);
      }
      param_1 = unaff_x20;
      func_0x000107914ab4(unaff_x20,puVar9 + -0x138);
      *(undefined4 *)(puVar9 + -0x154) = 0;
      param_4 = *(long *)(puVar9 + -0x148);
      goto code_r0x00010790c304;
    }
    if (unaff_x21 == unaff_x26) goto code_r0x00010790c650;
    func_0x0001079169f0();
    for (; -1 < (long)unaff_x22; unaff_x22 = (long *)((long)unaff_x22 + -1)) {
      func_0x0001079143fc();
      func_0x00010790cef4();
    }
    do {
      if ((long)uVar21 < 2) goto code_r0x00010790c650;
      *(long **)(puVar9 + -0x140) = unaff_x26;
      plVar14 = (long *)(puVar9 + -0x138);
      func_0x000107913e1c();
      uVar16 = 0;
      plVar18 = unaff_x21;
      do {
        iVar10 = (int)plVar14;
        uVar2 = uVar16 << 1 | 1;
        uVar1 = uVar16 * 2 + 2;
        plVar13 = plVar18 + uVar16 * 0xd + 0xd;
        uVar7 = uVar2;
        if ((long)uVar1 < (long)uVar21) {
          func_0x000107914838();
          func_0x0001079170f0();
          plVar13 = plVar18 + uVar16 * 0xd + 0x1a;
          uVar7 = uVar1;
          if (iVar10 == 0) {
            plVar13 = plVar18 + uVar16 * 0xd + 0xd;
            uVar7 = uVar2;
          }
        }
        uVar16 = uVar7;
        func_0x000107914010();
        plVar14 = plVar18;
        plVar18 = plVar13;
      } while ((long)uVar16 <= (long)(uVar21 - 2 >> 1));
      unaff_x26 = (long *)(*(long *)(puVar9 + -0x140) + -0x68);
      if (plVar13 == unaff_x26) {
        puVar12 = puVar9 + -0x138;
code_r0x00010790c8e0:
        func_0x000107914ab4(plVar13,puVar12);
      }
      else {
        func_0x000107914ab4(plVar13,unaff_x26);
        plVar14 = unaff_x26;
        func_0x000107914ab4(unaff_x26,puVar9 + -0x138);
        iVar10 = (int)plVar14;
        uVar16 = (long)plVar13 + (0x68 - (long)unaff_x21);
        if (0x68 < (long)uVar16) {
          uVar16 = uVar16 / 0x68 - 2 >> 1;
          func_0x000107914838();
          func_0x0001079167e4();
          if (iVar10 != 0) {
            func_0x000107914010(puVar9 + -0xd0);
            plVar14 = plVar13;
            do {
              plVar13 = unaff_x21 + uVar16 * 0xd;
              func_0x0001079141e4();
              if (uVar16 == 0) break;
              func_0x000107918584();
              func_0x000107914838();
              func_0x00010790c958();
              uVar1 = (ulong)plVar14 & 1;
              plVar14 = plVar13;
            } while (uVar1 != 0);
            puVar12 = puVar9 + -0xd0;
            goto code_r0x00010790c8e0;
          }
        }
      }
      uVar21 = uVar21 - 1;
    } while( true );
  }
  func_0x0001079189bc();
  *(undefined1 **)(puVar9 + -0xd0) = puVar12;
  *(undefined **)(puVar9 + -200) = puVar22;
  puVar12 = puVar9 + -0xd0;
  func_0x000107913a74();
  puVar22 = &UNK_10790cb94;
  plVar18 = unaff_x21;
  unaff_x21 = plVar14;
code_r0x00010790ca7c:
  func_0x000107916658();
  *(undefined1 **)(puVar9 + -0xb0) = puVar12;
  *(undefined **)(puVar9 + -0xa8) = puVar22;
  func_0x0001079144b8();
  func_0x000107915034();
  func_0x000107915d0c();
  iVar10 = (int)plVar18;
  func_0x000107915034();
  func_0x000107916808();
  if (((ulong)plVar18 & 1) == 0) {
    if (iVar10 == 0) {
      return;
    }
    func_0x000107914144(puVar9 + -0x168);
    func_0x000107914010(param_3);
    func_0x000107914ab4(unaff_x20,puVar9 + -0x168);
    iVar10 = (int)unaff_x20;
    func_0x00010791532c(*unaff_x22);
    func_0x000107915d0c();
    if (iVar10 == 0) {
      return;
    }
    func_0x000107913e1c(puVar9 + -0x168);
    func_0x000107914144(unaff_x21);
    func_0x000107915724();
  }
  else {
    if (iVar10 == 0) {
      func_0x000107913e1c(puVar9 + -0x168);
      func_0x000107914144();
      iVar10 = (int)unaff_x21;
      func_0x000107915724();
      func_0x000107914ab4();
      func_0x00010791532c(*unaff_x22);
      func_0x000107916808();
      if (iVar10 == 0) {
        return;
      }
      func_0x000107914144(puVar9 + -0x168);
    }
    else {
      func_0x000107913e1c(puVar9 + -0x168);
      param_3 = unaff_x21;
    }
    func_0x000107914010(param_3);
  }
  func_0x000107914ab4();
  return;
code_r0x00010790c728:
  plVar14 = plVar14 + 0xd;
  if (plVar14 == unaff_x26) {
code_r0x00010790c650:
    func_0x000107916c24(*(undefined8 *)(puVar9 + -8));
    return;
  }
  func_0x000107914838();
  func_0x000107917dc4();
  if ((int)param_1 != 0) {
    func_0x000107914010(puVar9 + -0xd0);
    lVar6 = lVar19;
    do {
      lVar20 = lVar6;
      plVar18 = unaff_x21;
      func_0x000107914ab4();
      param_1 = unaff_x21;
      if (lVar20 == 0) goto code_r0x00010790c784;
      func_0x000107914838();
      func_0x00010790c958();
      lVar6 = lVar20 + -0x68;
    } while (((ulong)plVar18 & 1) != 0);
    param_1 = (long *)((long)unaff_x21 + lVar20);
code_r0x00010790c784:
    func_0x000107914ab4(param_1,puVar9 + -0xd0);
  }
  lVar19 = lVar19 + 0x68;
  goto code_r0x00010790c728;
code_r0x00010790c62c:
  unaff_x26 = unaff_x22;
  if (((ulong)unaff_x20 & 1) != 0) goto code_r0x00010790c650;
  goto code_r0x00010790c2e8;
}


